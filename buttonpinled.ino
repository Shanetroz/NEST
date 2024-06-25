int led=10;
int buttonpin=4;
int buttonstate=0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  pinMode(buttonpin,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  buttonstate=digitalRead(buttonpin);
  if(buttonstate==HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
   {
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
   }                       // wait for a second
 }