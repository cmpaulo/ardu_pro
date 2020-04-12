int buzz = 6;
int led = 9; // The buzzer is connected to the digital pin 9
int photores = 0; // The photoresistor is connected to the analog pin 0
int Note; // Variable in which the note value is saved

void setup () {
   pinMode(buzz, OUTPUT);
   pinMode(led, OUTPUT); // The pin to which the buzzer is connected is set as an output
   Serial.begin(9600);
   }
  
void loop () {
   Note = 5 * (analogRead (photores)) + 1000; // Calculation of the note
   Serial.println(Note);
   if ( Note < 2800 ){
      digitalWrite(led,HIGH);
      delay(50) ;
      digitalWrite(led,LOW); 
      delay(100) ;
      tone(buzz,440,20);
      Serial.println("corrija a postura.");
   }
   else if (Note > 2800 & Note < 3600){ 
      digitalWrite(led,LOW);
      Serial.println("portura ok.");
   }
   else { 
      digitalWrite(led,HIGH);
      Serial.println("muito proximo do sensor");
    
   }
   delay (3000); // Wait 10 ms before changing the note
   }