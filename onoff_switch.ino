/*
 Author: Youssef Attia
 Description: fixing bouncing effect for push bottom to be used as a switch for LED
*/
#define led 13
#define bottom 2
int bottomread;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(bottom, INPUT);
}

void loop() {
  bottomread = digitalRead(bottom);

  if (bottomread == HIGH && digitalRead(led) == HIGH) {
    digitalWrite(led, LOW);
    while (digitalRead(bottom) == HIGH) {}
  }
  else if (bottomread == HIGH && digitalRead(led) == LOW) {
    digitalWrite(led, HIGH);
    while (digitalRead(bottom) == HIGH) {}
  }
}
