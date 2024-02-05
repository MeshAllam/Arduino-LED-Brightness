int Counter = 0;

void setup()
{}

void loop()
{
  while(Counter <= 255)
  {
    analogWrite(3 ,Counter);
   Counter+=64;
     delay(500);
  }
  
  for(int i=255; i>=0; i-=64)
  {
     analogWrite(3 ,i);
     delay(500);
  }
}