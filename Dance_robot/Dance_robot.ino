void setup() {
  // put your setup code here, to run once:
    pinMode(3,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(9,OUTPUT);
}

void loop() {
  // forward
    digitalWrite(3,1);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(9,0);
    delay(1000);
     // backward
     digitalWrite(3,0);
    digitalWrite(5,1);
    digitalWrite(6,0);
    digitalWrite(9,1);
    delay(1000);
     //right turm
     digitalWrite(3,1);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(9,1);
    delay(1000);
    // forward
    digitalWrite(3,1);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(9,0);
    delay(1000);
     //left turm
     digitalWrite(3,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(9,0);
    delay(1000);
     // backward
     digitalWrite(3,0);
    digitalWrite(5,1);
    digitalWrite(6,0);
    digitalWrite(9,1);
    delay(1000);
    for(i=0;i<=8;i++)
    {
      // forward
    digitalWrite(3,1);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(9,0);
    delay(100);
     //left turm
     digitalWrite(3,0);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(9,0);
    delay(100);
    //right turm
     digitalWrite(3,1);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(9,1);
    delay(100);
    }


}
