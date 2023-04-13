void setup() {
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(14, INPUT);
  pinMode(5, OUTPUT); // 6
  pinMode(4, OUTPUT); //7
  pinMode(2, OUTPUT); //8
  pinMode(19, OUTPUT); //4
  pinMode(22, OUTPUT); //2
  pinMode(23, OUTPUT); // 1
  pinMode(21, OUTPUT); //3
  pinMode(18, OUTPUT); //5
  //testing


}

void loop()
{
  if (digitalRead(25)==HIGH){
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(14, LOW);
    // switch1();
    digitalWrite(19, HIGH);
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
    digitalWrite(19, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(21, LOW);
    digitalWrite(22, HIGH);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(22, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(23, LOW);
    delay(500);
  }
  else if (digitalRead(26)==HIGH)
  {
    digitalWrite(25, LOW);
    digitalWrite(27, LOW);
    digitalWrite(14, LOW);
    // switch2();
    digitalWrite(2, HIGH);
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(23, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, HIGH);
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
    digitalWrite(19, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(21, LOW);
    digitalWrite(22, HIGH);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(22, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(23, LOW);
    delay(500);
  }
  else if (digitalRead(27)==HIGH)
    {
    digitalWrite(26, LOW);
    digitalWrite(25, LOW);
    digitalWrite(14, LOW);
    //switch3
    digitalWrite(23, HIGH);
    delay(500);
    digitalWrite(23, LOW);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(22, LOW);
    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(21, LOW);
    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(19, LOW);
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    digitalWrite(18, HIGH);
    delay(500);
    digitalWrite(18, LOW);
    digitalWrite(19, HIGH);
    delay(500);
    digitalWrite(19, LOW);
    digitalWrite(21, HIGH);
    delay(500);
    digitalWrite(21, LOW);
    digitalWrite(22, HIGH);
    delay(500);
    digitalWrite(22, LOW);
    digitalWrite(23, HIGH);
    delay(500);
    }
    else if (digitalRead(14)==HIGH)
    {
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(25, LOW);
    //switch4
     digitalWrite(23, HIGH);
     digitalWrite(21, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(4, HIGH); 
     delay(500);
     digitalWrite(23, LOW);
     digitalWrite(21, LOW);
     digitalWrite(18, LOW);
     digitalWrite(4, LOW);
     digitalWrite(22, HIGH);
     digitalWrite(19, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(2, HIGH);  
     delay(500);
     digitalWrite(22, LOW);
     digitalWrite(19, LOW);
     digitalWrite(5, LOW);
     digitalWrite(2, LOW);  

    } 
    else 
    {
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(19, LOW);
  digitalWrite(22, LOW);
  digitalWrite(23, LOW);
  digitalWrite(21, LOW);
  digitalWrite(18, LOW);
  digitalWrite(32, LOW);
  digitalWrite(27, LOW);
  digitalWrite(26, LOW);
  digitalWrite(25, LOW);
  digitalWrite(14, LOW);
    }
  

}
