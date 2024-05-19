#include <Adafruit_Sensor.h>
#include <MQUnifiedsensor.h>

#define         Board                   ("Arduino UNO")
#define         Pin                     (A5)  //Analog input 3 of your arduino
/***********************Software Related Macros************************************/
#define         Type                    ("MQ-3") //MQ3
#define         Voltage_Resolution      (5)
#define         ADC_Bit_Resolution      (10) // For arduino UNO/MEGA/NANO
#define         RatioMQ3CleanAir        (60) //RS / R0 = 60 ppm 
/*****************************Globals***********************************************/
//Declare Sensor
MQUnifiedsensor MQ3(Board, Voltage_Resolution, ADC_Bit_Resolution, Pin, Type);

void setup() 
{
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  MQ3.setRegressionMethod(1);
  MQ3.setA(0.3934); MQ3.setB(-1.504);
  MQ3.init();
  MQ3.setRL(10);
  float calcR0 = 0;
  for(int i = 1; i<=10; i ++)
  {
    MQ3.update(); // Update data, the arduino will be read the voltage on the analog pin
    calcR0 += MQ3.calibrate(RatioMQ3CleanAir);
  }
  MQ3.setR0(calcR0/10);
  MQ3.serialDebug(true);
  delay(20000); // allow the MQ3 to warm up
}

void loop() 
{
  MQ3.update(); 
  float data = MQ3.readSensor()*100;
   // MQ3 에서 읽은 PPM값X100
  Serial.println(data);
  if (data >= 0.11){
    Serial.println("Drunken!");
    digitalWrite(4,HIGH);

  }
  else {
    Serial.println("x");
    digitalWrite(4,LOW);
  }
  // ppm이 0.11 이상이면 O, 아니면 x
  delay(500); //500 ms 후 재측정 
}