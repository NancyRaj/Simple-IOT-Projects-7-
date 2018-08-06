//Open from Arduino Voice control app,Arduino Mega-Ledpin13 will be ON,and display Open in Serial moniter and Vice versa via Bluetooth device HC05
int led=13;
String data;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//Serial Moniter
Serial1.begin(9600);//HC05
}
void loop() {
  // put your main code here, to run repeatedly:
while(Serial1.available()>0){
  delay(100);
  char z=Serial1.read();
  data=data+z;
  }
  if(data.length()>0){
   Serial.println(data);
    if(data=="open"){
      digitalWrite(led,HIGH);
    }
   else if(data=="close"){ 
      digitalWrite(led,LOW);
        }
      data="";
    }
  }

