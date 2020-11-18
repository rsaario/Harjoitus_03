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
  if(data != -1){
  if(data == 'S'){
    digitalWrite(LED, LEDON);
  }else if(data == 'R'){
    digitalWrite(LED, LEDOFF);
   }else{
    Serial.println("Ainoastaan S ja R komennot toimivat");
   }
   }
  }
