#include <WiFi.h>
int lamp = 2;
const char *STAssid = "Xiaomi_5F2D";
const char *STApassword = "";
void setup() {
  // put your setup code here, to run once:
  //LED初始化
  pinMode(lamp,OUTPUT);
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  Serial.print("connect");
  WiFi.begin(STAssid,STApassword);
  while(WiFi.status()!=WL_CONNECTED){
    WiFi.disconnect();
    WiFi.begin(STAssid,STApassword);
     Serial.print(".");
     digitalWrite(lamp,1);
     delay(250);
     digitalWrite(lamp,0);
     delay(250);
  }
  Serial.println();
  IPAddress local_IP = WiFi.localIP();
  Serial.println(local_IP);
  digitalWrite(lamp,1);
}

void loop() {

}


// #include <WiFi.h>
 
// const char *STAssid = "ChinaNet-Djqm";
// const char *STApassword = "admin123";
 
// void setup() {
//   Serial.begin(115200);
//   WiFi.begin(STAssid, STApassword);         //连接WIFI
//   Serial.print("Connected");
//   //循环，直到连接成功
//   while(WiFi.status() != WL_CONNECTED){
//     Serial.print(".");
//     delay(500);
//   }
//   Serial.println();
//   IPAddress local_IP = WiFi.localIP();
//   Serial.print("WIFI is connected,The local IP address is "); //连接成功提示
//   Serial.println(local_IP);                                   //输出本地IP地址
// }
 
// void loop() {
 
// }

