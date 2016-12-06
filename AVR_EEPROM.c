//////////////////////////////////////////////
// AVR EEPROM WRAPPER LIBRARY
//
// DECEMBER 5, 2016
//
// ANKIT BHATNAGAR
// ANKIT.BHATNAGARINDIA@GMAIL.COM
//
// REFERENCE :
// http://www.avrfreaks.net/forum/tut-c-using-eeprom-memory-avr-gcc?page=all
//
//////////////////////////////////////////////


#include "AVR_EEPROM.h"


uint8_t AVR_EEPROM_read_byte(uint8_t* addr)
{
	//READ BYTE FROM THE SPECIFIED EEPROM ADDRESS

}

void AVR_EEPROM_write_byte(uint8_t* addr, uint8_t val)
{
	//WRITE BYTE TO THE SPECIFIED EEPROM ADDRESS

}

uint16_t AVR_EEPROM_read_word(uint16_t* addr)
{
	//READ WORD(16 BITS) FROM THE SPECIFIED EEPROM ADDRESS
}

void AVR_EEPROM_write_word(uint16_t* addr, uint16_t val)
{
	//WRITE WORD(16 BITS) TO THE SPECIFIED EEPROM ADDRESS

}

void AVR_EEPROM_read_block(void* pointer_eeprom, void* pointer_ram, size_t n)
{
	//READ BLOCK OF SPECIFIED SIZE FROM THE SPECIFIED EEPROM ADDRESS AND PLACE
	//IN THE SPECIFIED RAM BLOCK
}

void AVR_EEPROM_write_block(void* pointer_ram, void* pointer_eeprom, size_t n)
{
	//WRITE THE SPECIFIED RAM BLOCK OF SPECIFIED SIZE IN THE SPECIFIED EEPROM\
	//ADDRESS

}
