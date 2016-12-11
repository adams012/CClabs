
/* A simple program to sequentially turn on and turn off 3 LEDs */ 


int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int BUTTON = 3;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(BUTTON, INPUT);
}


void loop() {
  
  if(digitalRead(BUTTON) == HIGH)
  {
  digitalWrite(LED1, HIGH);    // turn on LED1 
                // wait for 200ms
  digitalWrite(LED2, HIGH);    // turn on LED2
                 // wait for 200ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
                 // wait for 200ms
  } 
else
  {
  digitalWrite(LED1, LOW);     // turn off LED1
                 // wait for 300ms
  digitalWrite(LED2, LOW);     // turn off LED2
                 // wait for 300ms
  digitalWrite(LED3, LOW);     // turn off LED3
                 // wait for 300ms before running program all over again
  }
}
