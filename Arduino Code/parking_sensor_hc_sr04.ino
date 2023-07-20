#define echoPin 8
#define trigPin 9
#define buzzerPin 10

int maximumRange = 50;
int minimumRange = 0;
int duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}


void loop() {

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 28.5;

  if (distance <=10){
  digitalWrite(2,HIGH);
  digitalWrite(buzzerPin,HIGH);
  delay(50);
  digitalWrite(2,LOW);
  digitalWrite(buzzerPin,LOW);
  delay(50);
  }

  if (distance <=15){
  digitalWrite(3,HIGH);
  digitalWrite(buzzerPin,HIGH);
  delay(50);
  digitalWrite(3,LOW);
  digitalWrite(buzzerPin,LOW);
  delay(100);
  }

  if (distance <=22){
  digitalWrite(4,HIGH);
  digitalWrite(buzzerPin,HIGH);
  delay(50);
  digitalWrite(4,LOW);
  digitalWrite(buzzerPin,LOW);
  delay(150);
  }

  if (distance <=30){
  digitalWrite(5,HIGH);
  digitalWrite(buzzerPin,HIGH);
  delay(50);
  digitalWrite(5,LOW);
  digitalWrite(buzzerPin,LOW);
  delay(200);
  }

  if (distance <=40){
  digitalWrite(6,HIGH);
  digitalWrite(buzzerPin,HIGH);
  delay(50);
  digitalWrite(6,LOW);
  digitalWrite(buzzerPin,LOW);
  delay(250);
  }

  if (distance <=50){
  digitalWrite(7,HIGH);
  digitalWrite(buzzerPin,HIGH);
  delay(50);
  digitalWrite(7,LOW);
  digitalWrite(buzzerPin,LOW);
  delay(500);
  }

}

