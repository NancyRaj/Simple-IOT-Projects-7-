int spin=A2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(spin);
float volt=float (x)*5/1023;
int temp=volt*100;
Serial.println(temp);
delay(500);
}
