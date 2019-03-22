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

  else if (x < 320) 
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,1);
  }
  else if (x < 320) 
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,1);
  }

  else if (y > 360) 
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,0);
  }

  else if (y < 320) 
  {
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,1);
  }

 

  
