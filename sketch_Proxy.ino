int pin=A2;  //Analog input
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int out=analogRead(pin);
Serial.println(out);
delay(1000);
}
