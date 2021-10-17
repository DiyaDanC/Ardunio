
int red=3;
int green=5;
char data = 0;                //Variable for storing received data
void setup() 
{
Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
pinMode(red, OUTPUT);        //Sets digital pin 3 as output pin
pinMode(green, OUTPUT);        //Sets digital pin 5 as output pin

}
void loop()
{
if(Serial.available())  // Send data only when you receive data:
{
data = Serial.read();      //Read the incoming data and store it into variable data
Serial.print(data);        //Print Value inside data in Serial monitor
Serial.print("\n");        //New line 

}
if(data=='S')
{
  digitalWrite(red, LOW); 
digitalWrite(green, LOW); 

}
if (data=='R')
{
  digitalWrite(red, HIGH); 

}
if(data=='L')
{
  digitalWrite(green, HIGH); 

}
}
