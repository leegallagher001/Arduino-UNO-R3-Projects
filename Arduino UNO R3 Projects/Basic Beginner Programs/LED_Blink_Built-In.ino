// LED Blink (Built-In) - Arduino (Elegoo) UNO R3
// This is a slightly modified version of the basic "built-in LED Blink" program
// This program blinks the LED six times each loop, twice for 250ms, twice for 500ms, and twice for 1 second

void setup() { // this is the code that is only run once on start
  pinMode(LED_BUILTIN, OUTPUT); // this initializes digital pin LED_BUILTIN as an output
}

void loop() { // this code acts similarly to the "forever loop" on the BBC Micro:bit
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level) (name of output, voltage level)
  delay(250);                      // keeps LED voltage HIGH for 250 milliseconds (0.25 seconds)
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(250);                      // keeps LED voltage LOW for 250 milliseconds (0.25 seconds)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); // 500 milliseconds (0.5 seconds)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // 1000 milliseconds (1 second)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250); // for even timing when the loop starts again
}
