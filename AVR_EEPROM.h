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

#ifndef _AVR_EEPROM_H_
#define _AVR_EEPROM_H_

#include <avr/eeprom.h>
#include <stdio.h>
#include <avr/io.h>

uint8_t AVR_EEPROM_Read8(uint8_t* addr);
void AVR_EEPROM_Write8(uint8_t* addr, uint8_t val);

uint16_t AVR_EEPROM_Read16(uint16_t* addr);
void AVR_EEPROM_Write16(uint16_t* addr, uint16_t val);

uint32_t AVR_EEPROM_Read32(uint32_t* addr);
void AVR_EEPROM_Write32(uint32_t* addr, uint32_t val);

void AVR_EEPROM_Read_Block(const void* pointer_eeprom, void* pointer_ram, uint16_t size);
void AVR_EEPROM_Write_Block(const void* pointer_ram, void* pointer_eeprom, uint16_t size);

#endif
