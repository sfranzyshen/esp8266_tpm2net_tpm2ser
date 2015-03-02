#UPDATE: 
We are consolidating the code into a single driver as it is expanding quickly ... the new code set is locate here:
https://github.com/sfranzyshen/esp8266_tpm2net 

# esp8266_tpm2net_tpm2ser

This is a custom firmware for the esp8266 wifi module that will output the TPM2SER protocol on the esp8266's uart using the TPM2NET protocol for input. This will create a gateway between the TPM2NET & TPM2SER prtocols allowing for a TPM2SER device (ie. an arduino running fastled) to be controlled over the network using the TPM2NET protocol. This is based on work by Frans (Frans-Willem) ... and others ...

my first approch is going to be a full gateway ... convert the incomming tpm2net to an rgb buffer then output the tpm2ser thru the esp8266's uart ... this would use the stock arduino (tpm2ser) firmware (or any other existing devices out there) without any changes ...

The second approch i am going to use a modified version of the arduion (tpm2net) firmware ... the esp8266 will simply pass the input tpm2net packets recieved (whole/unproccessed) to the arduino (using the uart) where the arduino will handle the decoding of the tpm2net protocol ...

# How to connect hardware
For this example we will connect an mcu (arduino) to the uart of the esp8266. If you are using the 8Mhz 3.3v arduino then hookup the tx of the esp8266 to the rx of the arduino and the rx of the esp8266 to the tx of the arduino. then connect the gnd (-) of the esp8266 to the gnd (-) of the arduino. because of the power draw from the esp8266 durring wifi operations ... power the arduino and the esp8266 from the same power source ... do not connect the esp8266 vcc (+) to the arduino's 3.3v output. ...

If you are using an mcu that operates above 3.3v you will need to not only provide a 3.3v power source for the esp8266, but you will also need to perform Bi-Directional Level Shifting between the tx & rx pins of the esp8266 (3.3v) and the tx/rx pins of the mcu (5v) ... do a search for "Bi-Directional Level Shifter" to find one that will fit your voltage needs. or look around for some hacks that exist to use a voltage divider from the 5v to the 3.3v side. And the 5v side will still see the 3.3v as useable ... but I like the Bi-Directional Level Shifter method myself

#How to build a build environment.

see this site from cnlohr: https://github.com/cnlohr/ws2812esp8266
