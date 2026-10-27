  int P1 = 3;
  int P2 = 5;
  int N1 = 6;
  int N2 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stop();
  delay(100);

  turnRight();
  delay(1000);

  stop();
  delay(100);

  turnLeft();
  delay(1000);

  stop();
  delay(100);
}

void stop(){
  digitalWrite(P1, HIGH);
  digitalWrite(P2, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(N2, LOW);
}

void turnRight(){
  digitalWrite(P1, LOW);
  digitalWrite(P2, HIGH);
  digitalWrite(N1, LOW);
  digitalWrite(N2, HIGH);
}

void turnLeft(){
  digitalWrite(P1, HIGH);
  digitalWrite(P2, LOW);
  digitalWrite(N1, HIGH);
  digitalWrite(N2, LOW);
}