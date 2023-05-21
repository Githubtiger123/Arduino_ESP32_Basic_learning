void setup() {
  // put your setup code here, to run once:

  pinMode(2,OUTPUT);
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
}

void loop() {
  // 方式一:
  // for(int i=0;i<1000;i++){
  //   for(int t=0;t<5;t++){
      
  //     for(int a = 0;a<i;a++){
  //       digitalWrite(2,1);
  //     }
  //     for(int a = 0;a<1000-i;a++){
  //       digitalWrite(2,0);
  //     }
  //   }
  // }


  // for(int i=0;i<1000;i++){
  //   for(int t=0;t<5;t++){
      
  //     for(int a = 0;a<i;a++){
  //       digitalWrite(2,0);
  //     }
  //     for(int a = 0;a<1000-i;a++){
  //       digitalWrite(2,1);
  //     }
  //   }
  // }

  for(int i=0;i<=255;i++){
    analogWrite(2,i);
    delay(5);
  }

  for(int i=255;i>=0;i--){
    analogWrite(2,i);
    delay(5);
  }
}
