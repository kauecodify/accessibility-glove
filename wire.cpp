#include <wire.h>
#include <SoftwareSerial.h>
#include <Tcs230 Tcs3200 Arduino Gy-31> //verify (black/white) and learning
#include <Arduino.h>
#include <NewPing.h>
#include <avr/pgmspace.h>

#define TRIGGER_PIN 12 //Pino ard pulse do trigger sensor
#define ECHO_PIN 11 //Return the sensor
#define MAX_DISTANCE 200 //maximum distance the sensor

#define TX_PIN 4 //connection arduino to TX Bluetooth
#define RX_PIN 5 //RX The module bluetooth

//PORTS ARDUÍNO
#define SO 8
#define S1 9
#define S2 10
#define S3 11
#define OUT 2
#define TOUCH_SENSOR_PIN 7

char determineLetter(int red, int green, int blue) {

    if (red > 100 && green < 100 && blue < 100) {
        return 'A';
    } else 
    
    if (red < 100 && green > 100 && blue < 100) {
        return 'B';
    } else 
    
    if (red < 100 && green > 100 && blue < 100) {
        return 'c';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'd';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'e';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'f';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'g';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'h';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'i';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'j';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'k';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'l';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'm';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'n';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'o';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'p';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'q';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'r';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 's';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 't';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'u';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'v';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'w';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'x';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'y';
    } else 

    if (red < 100 && green > 100 && blue < 100) {
        return 'z';
    } else 

 return ' ';
}

//---verify---//

void setup() {
    Serial.begin(9600);
    pinMode(S0, OUTPUT);
    pinMode(S1, OUTPUT);
    pinMode(S2, OUTPUT);
    pinMode(S3, OUTPUT);
    pinMode(OUT, INPUT);
    digitalWrite(S0,HIGH);
    digitalWrite(S1,HIGH);
    
    pinMode(TOUCH_SENSOR_PIN, INPUT);
}

void loop() {

    if (digitalRead(TOUCH_SENSOR_PIN) == HIGH) {

        digitalWrite(S2, LOW);
        digitalWrite(S3, LOW);
        delay(100);
        redValue = pulseIn(OUT, LOW);
        delay(10);
        greenValue = pulseIn(OUT, LOW);
        delay(10);
        blueValue = pulseIn(OUT, LOW);

        detectedLetter = determineLetter(redValue, greenValue, blueValue);

        serial.println(detectedLetter);

        while (digitalRead(TOUCH_SENSOR_PIN) == HIGH) {
            delay(100);
        }
    }
}

//---verify---//

int redValue, greenValue, blueValue;
char detectLetter = '';


NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // INITIAL SENSOR ULTRASONIC

void loop() {
    delay(50);
    unsigned int distance = sonar.ping_cm(); //size distance

    if (distance > 0) { //distance +0=atived
    String captured_word = "";

    while (distance > 0) {
        captured_word += capturedLetter(); //capture at the tip of the glove 
        delay(0100) //loading 0,1sec to capturing
        distance = sonar.ping_cm();
    }

    String traanslated_word = translateText(captured_word);
    serial1.println(translated_word);
    }
}

char captureLetter() {

}

String translateText(String text) {

    if (sensorValue == HIGH) {
        serial.print("Detect letter: ");
        Serial.printIn((char)('A' + i)); //detected
        digitalWrite(ledPins[i], HIGH); //LED ON
    } else {
        digitalWrite(ledPins[i], LOW); //LED OFF
    }

    //Return letter capturing
}

String translateText(String text) {

}
