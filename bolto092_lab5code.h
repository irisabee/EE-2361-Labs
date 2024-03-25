/* 
 * File:   bolto092_lab5code.h
 * Author: irisbolton
 *
 * Created on May 1, 2023, 1:50 PM
 */

#ifndef BOLTO092_LAB5MAIN_H
#define	BOLTO092_LAB5MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

void delay_ms(unsigned int ms);
void lcd_init(void);
void lcd_cmd(char command);
void lcd_setCursor(char x, char y);
void lcd_printChar(char myChar);
void lcd_printStr(const char *s);


#ifdef	__cplusplus
}
#endif

#endif	/* BOLTO092_LAB5MAIN_H */

