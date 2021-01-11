#define gaz A1

float hava_kalitesi;
void setup() {
  pinMode(gaz,INPUT);
  Serial.begin(9600);
}

void loop() {
  hava_kalitesi = analogRead(gaz);
  delay(200);
  if(hava_kalitesi > 500){
    Serial.print("Odanın Hava Kalitesi : Kötü");
    Serial.print(" // ");
    Serial.print("Odadaki Gaz Değeri : ");
    Serial.print(hava_kalitesi);
    Serial.println(" PPM");
  }
  else if(hava_kalitesi < 500){
    Serial.print("Odanın Hava Kalitesi : İyi // Odadaki Gaz Değeri : ");
    Serial.print(hava_kalitesi);
    Serial.println(" PPM");
  
  
  

}
}
