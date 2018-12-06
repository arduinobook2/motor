void setup()
{
   pinMode(11, OUTPUT);
   pinMode(9, OUTPUT);
    
}

void loop()
{
    digitalWrite(11, HIGH);
    digitalWrite(9, LOW);
 
   // a simple delay for understanding purpose  
   delay(2000);
   
    //Use following block of code to run DC motor in anti 
    //Clockwise
  
    digitalWrite(11, LOW);
    digitalWrite(9, HIGH);
    delay(2000);
}
