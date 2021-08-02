const byte lamp=7;
void setup() {
  Serial.begin(9600);
  pinMode(lamp,1);

}

void loop() {
 unsigned int ldrValue=analogRead(A0);
 
 Serial.println(ldrValue);
 if(ldrValue<400)
 {
  digitalWrite(lamp,1);
 }
 else{
  digitalWrite(lamp,0);
 }
 delay(1000);
}
