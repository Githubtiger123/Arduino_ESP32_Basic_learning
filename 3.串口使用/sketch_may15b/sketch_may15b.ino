#include <stdio.h>
#include <string.h>

char arr[100] = "";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("12345678790OK!");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<1000;i++){
    sprintf(arr,"计数:%d",i);
    Serial.println(arr);
    delay(100);
  }
}
