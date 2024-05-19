// 스위치 2개로 모터 앞 뒤 구동

void setup(){
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);

  }

void loop(){
  if(digitalRead(2)==HIGH & digitalRead(3)==LOW){
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
  }
  else if (digitalRead(2)==LOW & digitalRead(3)==HIGH){
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);

  }
}