void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}


void loop() {
    Serial.println("ON1");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);


    Serial.println("OFF1");
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
}