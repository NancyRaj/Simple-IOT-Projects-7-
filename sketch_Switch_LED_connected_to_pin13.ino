int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT); //Should assign for digital 
}

void loop() {
  digitalWrite(led,HIGH); //Output to digital device
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
  // put your main code here, to run repeatedly:

}
