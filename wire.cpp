#include <wire.h>
#include <SoftwareSerial.h>
#include <Tcs230 Tcs3200 Arduino Gy-31>
#include <Arduino.h>
#include <NewPing.h>
#include <avr/pgmspace.h>

#define TRIGGER_PIN 12 
#define ECHO_PIN 11 
#define MAX_DISTANCE 200 

#define TX_PIN 4 
#define RX_PIN 5 


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