 // Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 5;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode( 5, OUTPUT);     
  pinMode( 6, OUTPUT);     
  pinMode( 7, OUTPUT);     
  pinMode( 8, OUTPUT);     
  pinMode( 9, OUTPUT);     
  pinMode(10, OUTPUT);     
  pinMode(11, OUTPUT);     
  pinMode(12, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite( 5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite( 5, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite( 6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite( 6, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite( 7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite( 7, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite( 8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite( 8, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite( 9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite( 9, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
}
