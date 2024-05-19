#include <DHT.h>
#define DATAPIN A0 // 온습도
DHT myDHT11(DATAPIN,DHT11);

#define COUNT_MAX 10
#define AVG_MAX 70
float average=0;
int index =0;
float values[COUNT_MAX];


void setup() 
{
  //Wire.begin();
  //sensor.init();
  //sensor.configureDefault();
  //sensor.setTimeout(500);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  Serial.begin(9600);
  initialize();
  delay(1000); //예열
  Serial.println("Starting Sensing from now on!"); // initialize serial monitor (연습용) 최종버전에서 삭제!
}

void loop()
{
 while(true){
  float temp1= myDHT11.readTemperature(false);
  float humid1=myDHT11.readHumidity(false);
  delay (3000);
  float temp2= myDHT11.readTemperature(false);
  float humid2= myDHT11.readHumidity(false); //3초동안 불어서 온도와 습도 차이 저장
  while(true){
  int sensorValue = analogRead(A1);  // read MQ-3 data 
  values[index] = (float)sensorValue/1024;  // convert to %
  if (index >= COUNT_MAX -1) break;
  index++; 
  }  
  while((temp2-temp1>2)||(humid2-humid1)>2){
  Serial.println("blow");
  Serial.println(calcAverage());
  if(calcAverage()<1){digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  break;}
  else break;
    }//open
  
  //delay(500); //delay= 50ms 추가) 보다 빠른 감지를 위함. 

  
//0.7 이상시 음주 상태 측정가능(시간 지났을 때) / 확실하게는 1.1 이상으로 표현됨.
}
}

void initialize() 
{
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);

  for(int i=0; i<COUNT_MAX; i++) 
  {
    values[i] = 0;
  }
}

float calcAverage()
 {
  for(int i=0; i<COUNT_MAX; i++) 
  {
    average += values[i];
  }
  average = average / COUNT_MAX;
  return average;
}

