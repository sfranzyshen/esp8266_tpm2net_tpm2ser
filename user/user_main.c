#include "tpm2ser.h"
#include "tpm2net.h"

void user_init(void)
{
	wifi_set_opmode( 2 ); 
	wifi_station_dhcpc_start();

	tpm2net_init();
	tpm2ser_init();
}


