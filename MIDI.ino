void setup() {
  Serial.begin(115200);
  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

   for(int i = 0; i < 3; i++ ){
       noteOn(144, 103, 100); //sol
       noteOn(144, 107, 100);  //si
       noteOn(144, 108, 100);
       noteOn(144, 110, 100);
       noteOn(144, 98, 0);
     }
    //noteOn(144, 107, 100);
    //noteOn(144, 103, 100);

  /**if( digitalRead(13)  == LOW) {
    noteOn(144, 103, 100);
  } 

  if( digitalRead(12)  == LOW) {
    noteOn(144, 107, 100);
  

  if( digitalRead(11)  == LOW) {
    noteOn(144, 19, 100);
  } */
 
}

void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);  
  Serial.write(pitch);  
  Serial.write(velocity);  
  delay(500);
}
