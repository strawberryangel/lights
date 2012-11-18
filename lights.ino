// the setup routine runs once when you press reset:
void setup() 
{
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

void all_lights_off()
{
  digitalWrite(5, LOW);     
  digitalWrite(6, LOW);     
  digitalWrite(7, LOW);     
  digitalWrite(8, LOW);     
  digitalWrite(9, LOW);     
  digitalWrite(10, LOW);     
  digitalWrite(11, LOW);     
  digitalWrite(12, LOW);     
}

void pair_on(int first, int second)
{
  digitalWrite(first, HIGH);     
  digitalWrite(second, HIGH);     
}

void pair_off(int first, int second)
{
  digitalWrite(first, LOW);     
  digitalWrite(second, LOW);     
}

// Show #1 is opposite lights going around.
void show1() 
{
  all_lights_off();
  pair_on(5, 9);
  delay(100);               
  pair_off(5, 9);
  pair_on(6, 10);
  delay(100);               
  pair_off(6, 10);
  pair_on(7, 11);
  delay(100);               
  pair_off(7, 11);
  pair_on(8, 12);
  delay(100);               
  pair_off(8, 12);
  pair_on(9, 5);
  delay(100);               
  pair_off(9, 5);
  pair_on(10, 6);
  delay(100);               
  pair_off(10, 6);
  pair_on(11, 7);
  delay(100);               
  pair_off(11, 7);
  pair_on(12, 8);
  delay(100);               
}

// Show #2 is two lights next to each other going around. 
void show2() 
{
  all_lights_off();
  pair_on(5,6 );
  delay(100);               
  pair_off(5,6 );
  pair_on(6,7 );
  delay(100);               
  pair_off(6,7 );
  pair_on(7,8 );
  delay(100);               
  pair_off(7,8 );
  pair_on(8,9 );
  delay(100);               
  pair_off(8,9 );
  pair_on(9,10 );
  delay(100);               
  pair_off(9,10 );
  pair_on(10, 11 );
  delay(100);               
  pair_off(10, 11 );
  pair_on(11,12 );
  delay(100);               
  pair_on(12,5 );
  delay(100);               
}

// Show #3 is every other light on then off
void show3()
{
  all_lights_off();
  digitalWrite( 5, HIGH);   
  digitalWrite(7, HIGH);   
  digitalWrite(9, HIGH);   
  digitalWrite(11, HIGH);   
  delay(100);               
  all_lights_off();
  digitalWrite( 6, HIGH);   
  digitalWrite(8, HIGH);   
  digitalWrite(10, HIGH);   
  digitalWrite(12, HIGH);   
  delay(100);               
}

// the loop routine runs over and over again forever:
void loop() 
{
  int i;
  for(i=0; i<6; i++) 
    show1();
  for(i=0; i<6; i++) 
    show2();
  for(i=0; i<15; i++) 
    show3();
}

