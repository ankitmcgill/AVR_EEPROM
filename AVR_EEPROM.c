//////////////////////////////////////////////////////////////////////////////
// AVR EEPROM WRAPPER LIBRARY
// 
// BYTEWISE ACCESS TO READ / WRITE TO AVR EEPROM
//
// DECEMBER 5, 2016
//
// ANKIT BHATNAGAR
// ANKIT.BHATNAGARINDIA@GMAIL.COM
//
// REFERENCE :
// http://www.avrfreaks.net/forum/tut-c-using-eeprom-memory-avr-gcc?page=all
//
//////////////////////////////////////////////////////////////////////////////


#include "AVR_EEPROM.h"

uint8_t AVR_EEPROM_Read8(uint8_t* addr)
{
	//READ 8 BITS FROM THE SPECIFIED EEPROM ADDRESS
	
	return eeprom_read_byte(addr);
}

void AVR_EEPROM_Write8(uint8_t* addr, uint8_t val)
{
	//WRITE 8 BITS TO THE SPECIFIED EEPROM ADDRESS
	
	eeprom_update_byte(addr, val);
}

uint16_t AVR_EEPROM_Read16(uint16_t* addr)
{
	//READ 16 BITS FROM THE SPECIFIED EEPROM ADDRESS
	
	return eeprom_read_word(addr);
}

void AVR_EEPROM_Write16(uint16_t* addr, uint16_t val)
{
	//WRITE 16 BITS TO THE SPECIFIED EEPROM ADDRESS
	
	eeprom_update_word(addr, val);
}

uint32_t AVR_EEPROM_Read32(uint32_t* addr)
{
	//READ 32 BITS FROM THE SPECIFIED EEPROM ADDRESS
	
	return eeprom_read_dword(addr);
}

void AVR_EEPROM_Write32(uint32_t* addr, uint32_t val)
{
	//WRITE 32 BITS TO THE SPECIFIED EEPROM ADDRESS
	
	eeprom_update_dword(addr, val);
}

void AVR_EEPROM_Read_Block(const void* pointer_eeprom, void* pointer_ram, uint16_t size)
{
	//READ BLOCK OF SPECIFIED SIZE FROM THE SPECIFIED EEPROM ADDRESS AND PLACE
	//IN THE SPECIFIED RAM BLOCK
	
	eeprom_read_block(pointer_ram, pointer_eeprom, size);
}

void AVR_EEPROM_Write_Block(const void* pointer_ram, void* pointer_eeprom, uint16_t size)
{
	//WRITE THE SPECIFIED RAM BLOCK OF SPECIFIED SIZE IN THE SPECIFIED EEPROM
	//ADDRESS
	
	eeprom_update_block(pointer_ram, pointer_eeprom, size);
}
