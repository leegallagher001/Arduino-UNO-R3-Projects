// RGB LED Basics
// A basic introduction to the use of an RGB LED, including a short sequence of colour
// Sequence: RED -> GREEN -> BLUE -> RED -> PURPLE -> WHITE -> CYAN -> RED

// (1) Pin Setup

#define BLUE 3 // pin 3 wire connected to BLUE part of RGB LED
#define GREEN 5 // pin 5 wire connected to GREEN part of RGB LED
#define RED 6 // pin 6 wire connected to RED part of RGB LED

void setup()
{
pinMode(RED, OUTPUT); // initialises pin 6 (RED) ready to output
pinMode(GREEN, OUTPUT); // initialises pin 5 (GREEN) ready to output
pinMode(BLUE, OUTPUT); // initialises pin 3 (BLUE) ready to output
digitalWrite(RED, HIGH); // Red first colour in sequence, so starts off as HIGH
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

// (2) Colour Variables

int redValue;
int greenValue;
int blueValue;

// (3) The Main Loop

void loop() 
{
#define delayTime 10 // delay time of 10ms between each increment of the colour change (1-255)
// so around 2.55 seconds in total for a complete colour change

redValue = 255; // choose a value between 1 and 255 to change the color.
greenValue = 0;
blueValue = 0;

delay(1000); // 1 second of full RED

for(int i = 0; i < 255; i += 1) // changes colour from RED to GREEN over 2.55 seconds
{
  redValue -= 1;
  greenValue += 1;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  delay(delayTime);
}

redValue = 0;
greenValue = 255;
blueValue = 0;

delay(1000); // 1 second of full GREEN

for(int i = 0; i < 255; i += 1) // changes colour from full GREEN to full BLUE over 2.55 seconds
{
  greenValue -= 1;
  blueValue += 1;
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}

redValue = 0;
greenValue = 0;
blueValue = 255;

delay(1000); // 1 second of full BLUE

for(int i = 0; i < 255; i += 1) // changes colour from full BLUE to full RED over 2.55 seconds
{
  blueValue -= 1;
  redValue += 1;
  analogWrite(BLUE, blueValue);
  analogWrite(RED, redValue);
  delay(delayTime);
}

redValue = 255;
greenValue = 0;
blueValue = 0;

delay(1000); // 1 second of full RED

for (int i = 0; i < 255; i += 1) // RED to PURPLE
{
  blueValue += 1;
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}

redValue = 255;
greenValue = 0;
blueValue = 255;

delay(1000); // 1 second of full PURPLE (?)

for (int i = 0; i < 255; i += 1) // PURPLE to WHITE
{
  greenValue += 1;
  analogWrite(GREEN, greenValue);
  delay(delayTime);
}

redValue = 255;
greenValue = 255;
blueValue = 255;

delay(1000); // 1 second of full WHITE

for (int i = 0; i < 255; i += 1) // WHITE to CYAN/TURQUOISE
{
  redValue -= 1;
  analogWrite(RED, redValue);
  delay(delayTime);
}

redValue = 0;
greenValue = 255;
blueValue = 255;

delay(1000); // 1 second of full CYAN/TURQUOISE

for (int i = 0; i < 255; i += 1) // CYAN to RED
{
  redValue += 1;
  greenValue -= 1;
  blueValue -= 1;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}

redValue = 255;
greenValue = 0;
blueValue = 0;

}

