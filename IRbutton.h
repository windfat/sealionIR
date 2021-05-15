#ifndef IRBUTTON_H_
#define IRBTTON_H_

#define __STDC_LIMIT_MACROS
#include <stdint.h>
#include "IRremoteESP8266.h"
#include "IRtimer.h"
#include "ets_sys.h"

#define BUFF_SIZE 256
#define IRBUTTONPIN 5 // GPIO 5, = D1

typedef struct  {
    int bufsize = BUFF_SIZE;
    int buff[BUFF_SIZE];
    int rawlen;
    bool overflow;
    uint8_t rcvstate;

} btnparams_t;

// Classes

class IRbutton {

 public:

  explicit IRbutton(uint8_t Buttonpin);

  void begin();
  int read();

  volatile int Button_state;
  uint8_t IRButtonPin;
  volatile btnparams_t params;
  volatile ETSTimer timer;

};




#endif //end of IRBUTTON_H_