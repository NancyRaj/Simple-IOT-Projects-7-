//Here programming arduino to configure ESP8266 by AT commands 
//and then send temp data to thingspeak.com-IOT cloud
int spin=A2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.println("AT");
delay(500);
Serial.println("AT+CWJAP=\"joe6281\",\"qwerty6281\"");
delay(2000);
Serial.println("AT+CIPMUX=0");
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
int bitval=analogRead(spin);
float volt=float(bitval)*5/1023;
int temp=volt*100;
Serial.println("AT+CIPSTART=\"TCP\",\"api.thingspeak.com\",80");
if(Serial.find("ERROR")){
  return;}
 String msg="GET /update?api_key=SBUJYAR33WT8ZY6Z";
 msg=msg+"&field1="+String(temp);
 msg=msg+"\r\n";
 Serial.println("AT+CIPSEND="+String(msg.length()));
 if(Serial.find(">")){
  Serial.println(msg);}
  else{
    Serial.println("AT+CIPCLOSE");}
    delay(12000);
  
}

