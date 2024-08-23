/*
 * players.c
 *
 * Created: 10/22/2023 12:52:30 AM
 * Author : saiko_stores
 */ 
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include "LCD_config.h"
#include<util/delay.h>
#define F_CPU 16000000UL
u8 person0[] = {
	0x0E,
	0x0A,
	0x0E,
	0x04,
	0x1F,
	0x04,
	0x0A,
	0x0A
};
u8 person[8]={
	0x0E,
	0x0A,
	0x0E,
	0x04,
	0x1F,
	0x04,
	0x0A,
	0x11
};
u8 goal[] = {
	0x1F,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x10,
	0x1F
};
u8 ball1[] = {
	0x00,
	0x00,
	0x00,
	0x00,
	0x0E,
	0x1F,
	0x1F,
	0x0E
};
u8 ball2[] = {
	0x00,
	0x00,
	0x0E,
	0x1F,
	0x1F,
	0x0E,
	0x00,
	0x00
};
u8 ball3[] = {
	0x0E,
	0x1F,
	0x1F,
	0x0E,
	0x00,
	0x00,
	0x00,
	0x00
};
u8 space[] = {
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00
};
int main(void)
{
   /*  set data port --> output  */
   DIO_Vid_Set_Port_Dir(LCD_DPORT,PORT_OUTPUT) ;
   /* set control pins --> output */
   DIO_Vid_Set_Pin_Dir(LCD_CPORT,LCD_RS_PIN,OUTPUT) ;
   DIO_Vid_Set_Pin_Dir(LCD_CPORT,LCD_RW_PIN,OUTPUT) ;
   DIO_Vid_Set_Pin_Dir(LCD_CPORT,LCD_EN_PIN,OUTPUT) ;
   
   LCD_Vid_Init() ;
   LCD_Send_Special_Char(2,1,0,person0);
   LCD_Send_Special_Char(7,1,0,person0);
   LCD_Send_Special_Char(0,2,2,goal);
   LCD_Send_Special_Char(3,1,5,ball1);
   LCD_Send_Special_Char(7,0,0,person0);
   LCD_Send_Special_Char(2,1,1,person);
   _delay_ms(1000);
   LCD_Send_Special_Char(2,1,0,person0);
   LCD_Send_Special_Char(3,1,3,space);
   _delay_ms(100);
  LCD_Send_Special_Char(4,1,6,ball2);
  _delay_ms(100);
  LCD_Send_Special_Char(4,1,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(5,1,7,ball3);
  _delay_ms(100);
  LCD_Send_Special_Char(5,1,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(6,0,5,ball1);
  LCD_Send_Special_Char(7,0,1,person);
  _delay_ms(1000);
  LCD_Send_Special_Char(7,0,0,person0);
  LCD_Send_Special_Char(6,0,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(5,0,5,ball1);
  _delay_ms(100);
  LCD_Send_Special_Char(5,0,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(4,0,5,ball1);
  _delay_ms(100);
  LCD_Send_Special_Char(4,0,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(3,0,5,ball1);
  _delay_ms(100);
  LCD_Send_Special_Char(3,0,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(2,0,5,ball1);
  _delay_ms(100);
  LCD_Send_Special_Char(2,0,3,space);
  _delay_ms(100);
  LCD_Send_Special_Char(1,0,5,ball1);
  _delay_ms(100);
  LCD_Send_Special_Char(1,0,3,space);
  _delay_ms(100);
  
  LCD_Vid_Send_Command(1);
  LCD_Vid_GOTOXY(2,0);
  LCD_Vid_Send_String("G0OOAAAALLL!!!");
  
    while (1) 
    {	
		  // LCD_Send_Special_Char(4,1,5,ball2);
		//LCD_Send_Special_Char(2,1,0,person0);
		
    }
}

