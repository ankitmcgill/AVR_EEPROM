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

uint8_t AVR_EEPROM_read_byte(uint8_t* addr);
void AVR_EEPROM_write_byte(uint8_t* addr, uint8_t val);

uint16_t AVR_EEPROM_read_word(uint16_t* addr);
void AVR_EEPROM_write_word(uint16_t* addr, uint16_t val);

void AVR_EEPROM_read_block(void* pointer_eeprom, void* pointer_ram, size_t n);
void AVR_EEPROM_write_block(void* pointer_ram, void* pointer_eeprom, size_t n);

#endif
