

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(0,INPUT_PULLUP);
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(0)==0){

    delay(50);
    if(digitalRead(0)==0){
      while(digitalRead(0)==0);
      digitalWrite(2,!(digitalRead(2)));
    }
  }
}
