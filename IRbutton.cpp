// Copyright 2021, Windfat

#include "IRbutton.h"
#include <stddef.h>

#include <Arduino.h>
#include "IRremoteESP8266.h"
#include "IRutils.h"



/// Enable the pin for input and internal pullUp
void IRbutton::begin() {

  pinMode(IRButtonPin, INPUT_PULLUP);

}

int IRbutton::read() {

  Button_state = digitalRead(IRButtonPin);

  return Button_state;
}

//Constructor
IRbutton::IRbutton(uint8_t Buttonpin) {
 
   Button_state = 0;
   IRButtonPin = Buttonpin;
 
               

}








