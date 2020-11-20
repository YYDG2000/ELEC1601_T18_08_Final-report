  #include <Servo.h>                      // Include servo library
  Servo servoLeft;                        // Declare left and right servos
  Servo servoRight;
  void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servoLeft.attach(13);
  servoRight.attach(12)

  pinMode(10, INPUT)
  pinMode(3, INPUT)
  pinMode(9, OUTPUT)
  pinMode(2, OUTPUT)

}

void loop() {
  // put your main code here, to run repeatedly:
  int irLeft = irDetect(9, 10, 38000);
  int irRight = irDetect(2, 3, 38000);

  Serial.print(irLeft + " ");
  Serial.println(irRight);

  if (irLeft == 1 && irRight == 1){
    //straight
    servoLeft.writeMicroseconds(1000);
    servoRight.writeMicroseconds(2000);
  }else if (irRight == 1){
    //turn left
    servoLeft.writeMicroseconds(1550);
    servoRight.writeMicroseconds(1550);
  }else if (irLeft == 1){
    //turn right
    servoLeft.writeMicroseconds(1450);
    servoRight.writeMicroseconds(1450);
  }else{
    //stop
    servoLeft.writeMicroseconds(1500);
    servoRight.writeMicroseconds(1500);
  }

}
