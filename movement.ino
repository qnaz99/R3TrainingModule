int lmotorf = 5;
int lmotorb = 6;
int rmotorf = 11;
int rmotorb = 10;

int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 7;

int temp; 

double pot;

void setup() {              

  pinMode(lmotorf, OUTPUT);
  pinMode(lmotorb, OUTPUT);
  pinMode(rmotorf, OUTPUT);
  pinMode(rmotorb, OUTPUT);
  Serial.begin(9600);
  pinMode(pin1, INPUT_PULLUP);
  pinMode(pin2, INPUT_PULLUP);
  pinMode(pin3, INPUT_PULLUP);
  pinMode(pin4, INPUT_PULLUP);
  /*digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);*/
  

}
void loop() {
  pot = analogRead(A0);
  temp = digitalRead(pin1);
  Serial.println(digitalRead(3));
  if (digitalRead(2)== 0){
  	analogWrite(lmotorf, (pot/4));
  	analogWrite(rmotorf, (pot/4));
  }
  else if (digitalRead(3) == 0){
    analogWrite(lmotorb, (pot/4));
  	analogWrite(rmotorb, (pot/4));
  }
  else if (digitalRead(4) == 0){
    analogWrite(lmotorb, (pot/4));
  	analogWrite(rmotorf, (pot/4));
  }
  else if (digitalRead(7) == 0){
    analogWrite(lmotorf, (pot/4));
  	analogWrite(rmotorb, (pot/4));
  }
  else{
    analogWrite(lmotorf,0);
  	analogWrite(rmotorf,0);
    analogWrite(lmotorb,0);
  	analogWrite(rmotorb,0);
  }
  delay(50);
}
