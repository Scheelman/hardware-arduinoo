void setup() {
  // Hier zet ik pin 13 en pin 10 als OUTPUT.
  // Deze twee pinnen gebruik ik voor de twee LEDS
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // Eerst gaat de LED op pin 13 aan.
  // Tegelijk blijft de LED op pin 10 uit.
  digitalWrite(13, HIGH);
  digitalWrite(10, LOW);
  delay(2000); // Wacht 2 seconden

  // Daarna wisselen de LEDS om.
  // Pin 13 gaat uit en pin 10 gaat aan.
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(2000); // Wacht weer 2 seconden
}

