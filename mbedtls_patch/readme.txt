#to setup the TLS RSA encryption with mbedtls

#1. include the mbedtls library from platform.io

cp common.h to ../sealionIR/.pio/libdeps/nodemcuv2/mbedtls-psk/library/
cp config_esp.h to ../sealionIR/.pio/libdeps/nodemcuv2/mbedtls-psk/include/mbedtls/
cp pkparse.c.working ../sealionIR/.pio/libdeps/nodemcuv2/mbedtls-psk/library/pkparse.c

#Then build again

