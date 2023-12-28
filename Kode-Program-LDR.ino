int nilai=0;
void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT); //Ini program buzzernya
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
  
{
  
  nilai= analogRead(A1);
  
  if(nilai<500)
  {
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH); /*punya buzzer*/
    digitalWrite(2, HIGH);
    Serial.println("Light ON");
    Serial.println(nilai);
  }
  else
  {
     digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW); // Buzzer
    digitalWrite(2, LOW);
    Serial.println("Light OFF");
    Serial.println(nilai);
  }
}

