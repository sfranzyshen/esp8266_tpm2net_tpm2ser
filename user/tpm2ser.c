#include "osapi.h"
#include "ets_sys.h"
#include "driver/uart.h"

void ICACHE_FLASH_ATTR tpm2ser_strip(uint8_t * buffer, uint16_t length) {

}


void ICACHE_FLASH_ATTR tpm2ser_init() {
  uart_init(BIT_RATE_921600, BIT_RATE_115200);
  
}
