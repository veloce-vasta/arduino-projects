const byte button_left = 6;
const byte button_right = 5;
const byte led_left = 9;
const byte led_right = 11;
const byte led_middle = 10;


void setup() {
  pinMode(button_left, INPUT);
  pinMode(button_right, INPUT);
  pinMode(led_left, OUTPUT);
  pinMode(led_middle, OUTPUT);
  pinMode(led_right, OUTPUT);
}

void loop() {
  button_left_state = digitalRead(button_left);
  button_right_state = digitalRead(button_right);
  
  if (button_right_state == HIGH) {
    digitalWrite(led_right, HIGH);
  } else {
    digitalWrite(led_right, LOW);
  }
  
  if (button_left_state == HIGH) {
    digitalWrite(led_left, HIGH);
  } else {
    digitalWrite(led_left, LOW);
  }
  
  if (button_left_state == HIGH && button_right_state == HIGH) {
    digitalWrite(led_middle, HIGH);
    digitalWrite(led_left, LOW);
    digitalWrite(led_left, LOW);
  } else {
    digitalWrite(led_middle, LOW);
  }
  
  delay(200);
}
