// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); // '13' mark the pin you choose, 'OUTPUT' is the pin mode 
}

// the loop function runs over and over again forever
void loop() {
  // set LED brink at a certain frequency
  int ledvalue=1;
  digitalWrite(13, ledvalue);
  Serial.println(ledvalue);
  delay(250);
  ledvalue=0;                      
  digitalWrite(13, ledvalue);
  Serial.println(ledvalue); 
  delay(250);
  ledvalue=1;                      
  digitalWrite(13, ledvalue);
  Serial.println(ledvalue);
  delay(250);
  ledvalue=0;
  digitalWrite(13, ledvalue);
  Serial.println(ledvalue); 
  delay(250);
  ledvalue=1; 
  digitalWrite(13, ledvalue);
  Serial.println(ledvalue);
  delay(1000);
  ledvalue=0; 
  digitalWrite(13, ledvalue);
  Serial.println(ledvalue);
  delay(500);
}
