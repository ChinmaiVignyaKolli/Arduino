int LED = 13;
int sensorPin=7;

void setup() {
 pinMode(LED,OUTPUT);
 pinMode(sensorPin,INPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
int value=digitalRead(sensorPin);
if(value==1)
{
  digitalWrite(LED,HIGH);
}
else
{
  digitalWrite(LED,LOW);
}
delay(200);
}
