void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
flash(200); flash(200); flash(200); //S
delay(300); //otherwise
flash(500); flash(500); flash(500); //O
flash(200); flash(200); flash(200); //S
delay(1000); //wait 1 second
}

void flash(int duration)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(duration); 
}

