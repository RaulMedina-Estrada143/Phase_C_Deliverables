String incomingChar;

void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
 // time
 pinMode(13, OUTPUT); //set pin 13 as an output
}

void loop() {
  if (Serial.available() > 0) { // check if there is incoming serial data
    incomingChar = Serial.readStringUntil("/n");
    //char incomingChar = Serial.read(); // read the incoming byte
    Serial.print(incomingChar); // print the incoming byte back to the serial monitor
    if (incomingChar == "$STR") {
    digitalWrite(13, HIGH);
    }
    else if (incomingChar == "$STP") {
    digitalWrite(13, LOW);
    }
  }
}