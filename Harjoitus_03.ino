/*
 * Ohjelmassa luetaan arjaporttiin tulleita arvoja. Luettu arvo 
 * tallentuu data nimiseen muuttujaan.
 */

#define LED 5
 
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

#define LEDON LOW
#define LEDOFF HIGH

void loop() {
  int data = Serial.read();
  if(data == 10 || data == 13 ){
    data = -1; // ei reagoida näihin
  }
  if(data != -1 ){
  if(data == 'S' || data == 's'){
    digitalWrite(LED, LEDON);
  }else if(data == 'R' || data == 'r'){
    digitalWrite(LED, LEDOFF);
   }else{
    Serial.println("Ainoastaan S ja R komennot toimivat");
   }
   }
  }
