# esp8266_tpm2net_tpm2ser

This is a custom firmware for the esp8266 wifi module that will output the TPM2SER protocol on the esp8266's uart using the TPM2NET protocol for input. This will create a gateway between the TPM2NET & TPM2SER prtocols allowing for a TPM2SER device (ie. an arduino running fastled) to be controlled over the network using the TPM2NET protocol. This is based on work by Frans (Frans-Willem) ... and others ...

# How to connect hardware
For this example we will connect an mcu (arduino) to the uart of the esp8266. If you are using the 8Mhz 3.3v arduino then hookup the tx of the esp8266 to the rx of the arduino and the rx of the esp8266 to the tx of the arduino. then connect the gnd (-) of the esp8266 to the gnd (-) of the arduino. because of the power draw from the esp8266 durring wifi operations ... power the arduino and the esp8266 from the same power source ... do not connect the esp8266 vcc (+) to the arduino's 3.3v output. ...

#How to build a build environment.

see this site from cnlohr: https://github.com/cnlohr/ws2812esp8266
