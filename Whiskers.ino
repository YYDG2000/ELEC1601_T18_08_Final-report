void setup()                                 // Built-in initialization block
{
                       
  pinMode(7, INPUT);                         // Set right whisker pin to input
  pinMode(5, INPUT);                         // Set left whisker pin to input  

  Serial.begin(9600);                        // Set data rate to 9600 bps
}  
 
void loop()                                  // Main loop auto-repeats
{                                            
  byte wLeft = digitalRead(5);               // Copy left result to wLeft  
  byte wRight = digitalRead(7);              // Copy right result to wRight
  delay(50);                                 // Pause for 50 ms

  if (wLeft == 0 || wRight == 0){
      //Turn around
    servoLeft.writeMicroseconds(2000);
    servoRight.writeMicroseconds(2000);
    delay(80); // Need to measure the value


  }
}
