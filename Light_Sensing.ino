const int LED = 13;
const int LS = 7;
int val = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(LS, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(LS);
if(val ==HIGH){
  digitalWrite(LED, HIGH);
}else{
  digitalWrite(LED, LOW);
}
}
