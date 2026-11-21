int light1 = 2;
int light2 = 3;
int fan = 4;
int tv = 5;

char data;

void setup() {
  Serial.begin(9600);

  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(tv, OUTPUT);

  Serial.println("HOME AUTOMATION SYSTEM");
  Serial.println("1 - Light 1 ON");
  Serial.println("2 - Light 1 OFF");
  Serial.println("3 - Light 2 ON");
  Serial.println("4 - Light 2 OFF");
  Serial.println("5 - Fan ON");
  Serial.println("6 - Fan OFF");
  Serial.println("7 - TV ON");
  Serial.println("8 - TV OFF");
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();

    if (data == '1')
      digitalWrite(light1, HIGH);

    else if (data == '2')
      digitalWrite(light1, LOW);

    else if (data == '3')
      digitalWrite(light2, HIGH);

    else if (data == '4')
      digitalWrite(light2, LOW);

    else if (data == '5')
      digitalWrite(fan, HIGH);

    else if (data == '6')
      digitalWrite(fan, LOW);

    else if (data == '7')
      digitalWrite(tv, HIGH);

    else if (data == '8')
      digitalWrite(tv, LOW);
  }
}
