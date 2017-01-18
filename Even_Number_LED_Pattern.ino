const int a = 3; // a will be the value of the number of LED's that will be used//
const int k[a] = {11,12,13};  // The analog pins that will connected to the LED's//
void setup(){          
  for(int i = 0; i<a;i++){
  pinMode(k[i], OUTPUT);     // Setting the Pin mode to Write//
   }
}
void loop(){
  for(int i =0;i<a;i++){
    if(i % 2 == 0){   // When i divide with 2 gives a remainder.If there is a remainder then it won't light up// 
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


