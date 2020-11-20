int JoyStick_X = 0; //x
int JoyStick_Y = 1; //y
int JoyStick_Z = 9; //key

void setup()
{
  pinMode(JoyStick_Z, INPUT);
  Serial.begin(9600); // 9600 bps
}
void loop()
{
  int x,y,z;
  x=analogRead(JoyStick_X);
  y=analogRead(JoyStick_Y);
  z=digitalRead(JoyStick_Z);
  Serial.print(x ,DEC);
  Serial.print(",");
  Serial.print(y ,DEC);
  Serial.print(",");
  Serial.println(z ,DEC);
  delay(200);

  //middle(a): 512,517,1
  //west(b):512,0,1
  //nw(f): 1023,0,1
  //north(c):1023,517,1
  //ne(g): 1023,1023,1
  //east(d): 512,1023,1
  //se(h): 0,1023,1
  //south(e): 0 517,1
  //sw(i): 0,0,1
}
