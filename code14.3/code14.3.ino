void setup()
{
   pinMode(11, OUTPUT);
   pinMode(9, OUTPUT);
    
}

void loop()
{
    analogWrite(11, 200);
    digitalWrite(9, LOW);
    delay(2000);
    digitalWrite(11, LOW);
    analogWrite(9,100);
    delay(2000);
}
