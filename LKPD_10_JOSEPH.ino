//joseph serafino
//kelas XI TAV 1
const int buttonPin = 26;
void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);}
void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.print("Tombol ditekan: ");
  if (buttonState == HIGH){
    Serial.print("YA");
  } else {
    Serial.println("TIDAK");}
   delay(100);}
