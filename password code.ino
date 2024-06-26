// C++ code
//
int swt1=13;
int swt2=12;
int swt3=11;
int swt4=10;
int led=3;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(swt1, INPUT);
   pinMode(swt2, INPUT);
   pinMode(swt3, INPUT);
   pinMode(swt4, INPUT);
}

void loop()
{
int  bus1=digitalRead(swt1);
 int  bus2=digitalRead(swt2);
 int  bus3=digitalRead(swt3);
 int  bus4=digitalRead(swt4);
  if ((bus1==HIGH&&bus3==HIGH)&&(bus2==LOW&&bus4==LOW))
  {
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
  else
{
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}
