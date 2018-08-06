int led=13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char z=Serial.read();
if(z=='a'){
  digitalWrite(led,HIGH);
  Serial.println("ON");
}
  else if(z=='b'){
    digitalWrite(led,LOW);
    Serial.println("OFF");
  }  
}


