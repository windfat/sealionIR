//https://github.com/espressif/esp8266-nonos-sample-code/blob/master/04Protocal/mbedtls/mbedtls/platform/esp_hardware.c

#if !defined(MBEDTLS_CONFIG_FILE)
#include "mbedtls/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

#include <sys/types.h>
#include "osapi.h"

#include <Arduino.h>
//#include <FS.h>
//#include <ArduinoJson.h>
#include <string.h>


#define MBEDTLS_ENTROPY_HARDWARE_ALT
#if defined(MBEDTLS_ENTROPY_HARDWARE_ALT)
/**
 * \brief           Entropy poll callback for a hardware source
 *
 * \warning         This is not provided by mbed TLS!
 *                  See \c MBEDTLS_ENTROPY_HARDWARE_ALT in config.h.
 *
 * \note            This must accept NULL as its first argument.
 */
 
int mbedtls_hardware_poll( void *data,
                           unsigned char *output, size_t len, size_t *olen )
{

    //char iSecretStr[100];
	int iSecret;

  

/* initialize random seed: */
      srand (time(NULL));

    /* generate secret number between 1 and 100: */
      iSecret = rand() % 100 + 1;

      unsigned long timer = iSecret;
    ((void) data);
    *olen = 0;
 
    if( len < sizeof(unsigned long) )
        return( 0 );
 
    memcpy( output, &timer, sizeof(unsigned long) );
    *olen = sizeof(unsigned long);
 
    return( 0 );

	  //snprintf(iSecretStr, "*d", iSecret);
     // strcpy(output, iSecretStr);
	  //*olen = strlen(iSecretStr);


	//os_get_random(output, len);
	//*olen = len;
	
}

#endif
