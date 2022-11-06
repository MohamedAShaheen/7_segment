#include "avr/io.h"
#define F_CPU 8000000
#include "avr/delay.h"
#include "bit_cal.h"
#include "std_types.h"

char arr[10] = {0b00111111,0b00110000,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b11111111,0b01101111};
void main(void){
	DDRA = 0b11111111;
	DDRD = 0b11111111;
while(1){
for(int j=0; j<10 ; j++){



	for(int i = 0 ; i <10 ; i++){

		PORTA=arr[i];
		_delay_ms(500);
	}
	PORTD=arr[j];

}


}
}
