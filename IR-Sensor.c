#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>


double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;



void setup(){
    Serial.begin(115200);
    
    pinMode(A0+0,INPUT);
    pinMode(A0+1,INPUT);
}

void loop(){
    
    Serial.println("Right Value");
    Serial.println(analogRead(A0+0));
    _delay(1);
    Serial.println("Left Value");
    Serial.println(analogRead(A0+1));
    _delay(1);
    
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
    
}