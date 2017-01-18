const int a = 3; // The number depends on the number of LED's attached//
const int k[a] = {11,12,13};// the number should be the pins connected to it//
void setup(){
  for(int i = 0; i<a;i++){
  pinMode(k[i], OUTPUT);
  }
}
void loop(){
  for(int i =0;i<a;i++){
    if(i % 2 == 0){
    digitalWrite(k[i], HIGH);
    delay(1000);
   }
  } 
  for(int i = a-1;i>=0;i--){
    if( i % 2 == 0){
    digitalWrite(k[i], LOW);
    delay(1000);
    } 
  }
}


