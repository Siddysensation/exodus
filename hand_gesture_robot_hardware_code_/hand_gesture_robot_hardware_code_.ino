int x,y;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  x = analogRead(0);
  y = analogRead(1);

  if(x > 360) 
  {
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,0);
  }
