#define MQ2pin 16 // Mendefinisikan pin yang terhubung ke sensor MQ2
int sensorValue; // Variable untuk menyipan nilai sensor
void setup(){
  Serial.begin(9600); // Mulai komunikasi serial dengan kecepatan 9600 baud
  Serial.println("Memanaskan MQ2"); // cetak pesan "Memanaskan MQ2" ke port serial
  delay(20000);}
 void loop(){
  sensorValue = digitalRead(MQ2pin);
  Serial.print("Digital Outout; ");
  Serial.print(sensorValue);
  if (sensorValue) {
   Serial.println(" | Smoke/Gas: Tidak Terdeteksi");
 } else {
  Serial.println(" | Smoke/Gas: Terdeteksi!");}
 delay(2000);}
