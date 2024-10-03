// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(13, OUTPUT); // '13' mark the pin you choose, 'OUTPUT' is the pin mode 
}
// the loop function runs over and over again forever
void loop() {
  // set LED brink at a certain frequency
  digitalWrite(13, HIGH);
  delay(250);                      
  digitalWrite(13, LOW); 
  delay(250);                      
}
