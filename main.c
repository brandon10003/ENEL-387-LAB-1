/*First Program in C
Author-Brandon Clarke,Jan 2019*/

#include "lab1_lib.h"

int main(void){
	
	clockInit();
	led_IO_init ();
	
	while(1){
		
		led_wigwag();
		
	}
}
