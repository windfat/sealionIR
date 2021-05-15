# sealionIR
Sealion IR remote control connected to Sealion IoT server. This is a modified copy of MQTT IR server from David Conran with the changes for connection to sealion IoT server. The original code can be found under https://github.com/crankyoldgit/IRremoteESP8266/blob/master/examples/IRMQTTServer/IRMQTTServer.ino


This release also add a button for handling the on boarding of the device with the Sealion IoT server. Besides, the mbedtls library (breadsword/mbedtls-psk @ ^0.1) is also used. To setup the mbedtls-psk, some change is made, please refer to the readme file inside mbedtls_patch folder.
