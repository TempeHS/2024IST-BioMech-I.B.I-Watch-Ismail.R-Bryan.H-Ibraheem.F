// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int buzzer =  3;      // the number of the buzzer pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(buzzer, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
<<<<<<< HEAD
     turn LED on:
=======
    turn LED on:
>>>>>>> 30ca75089c1fff2fe2086a4f977929dc9c92b1dd
    digitalWrite(buzzer, LOW);
  } else {
    turn LED off:
    digitalWrite(buzzer, HIGH);
  }
}
