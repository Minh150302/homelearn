//Analog

const int ledPin = 2; //pin 2 built-in led 
const int soundPin = A0; //sound sensor attach to A0 
int threshold = 600; //Set minimum threshold for LED lit 

void setup() { 
  pinMode(ledPin,OUTPUT);//set pin2 as OUTPUT 
  Serial.begin(9600); //initialize serial 
} 

void loop() { 
  int value = analogRead(soundPin);//read the value of A0 
  Serial.println(value);//print the value 
  if(value > threshold) //if the value is greater than 600 
  { 
    digitalWrite(ledPin,HIGH);//turn on the led 
    delay(100);//delay 200ms 
  } 
  else { 
    digitalWrite(ledPin,LOW);//turn off the led 
  } 
  delay(500); 
}




//Digital


// int Led = 2 ;// define LED Interface
// int buttonpin = 8; // define D0 Sensor Interface
// int val = 0;// define numeric variables val
 
// void setup ()
// {
//   pinMode (Led, OUTPUT) ;// define LED as output interface
//   pinMode (buttonpin, INPUT) ;// output interface D0 is defined sensor
//   Serial.begin(9600);
// }
 
// void loop ()
// {
//   val = digitalRead(buttonpin);// digital interface will be assigned a value of pin 3 to read val
//   if (val == HIGH) // When the sound detection module detects a signal, LED flashes
//   {
//     digitalWrite (Led, HIGH);
//     Serial.println("sound detected");
//     delay(200);
//   }
//   else
//   {
//     digitalWrite (Led, LOW);
//     Serial.println("no sound detected");
//   }
//   // delay(500);
// }