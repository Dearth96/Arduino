const int LED = 13;// Pin Number//
void setup(){
  pinMode(LED, OUTPUT);   // writing into the LED//
}

void loop(){
  digitalWrite(LED, HIGH);//Setting the pin LED to HIGH//
  delay(1000);
  digitalWrite(LED, LOW);//Setting the pin LED to LOW//
  delay(1000);
}

