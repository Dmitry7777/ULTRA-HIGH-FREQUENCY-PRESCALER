/*
Pin Number Symbol Function:
---------------------------
1 - IN Input
2 - VCC Power Supply Voltage
3 - SW1 Divide Ratio Control Input Selecting Divide Ratio (See Divide Ratio Table)
4 - OUT Output
5 - GND Ground
6 - SW2 Divide Ratio Control Input Selecting Divide Ratio (See Divide Ratio Table)
7 - NC No Connection
8 - IN Complementary Input

Filename: ULTRA_HIGH_FREQUENCY_PRESCALER.h
*/


#define ULTRA_HIGH_FREQUENCY_PRESCALER_H
#ifndef ULTRA_HIGH_FREQUENCY_PRESCALER_H

#include<ULTRA_HIGH_FREQUENCY_PRESCALER.h>

#define Input_Buffer
#define Output_Buffer
#define Divide_Ratio_SW1_HIGH 0x40 //1/64
#define Divide_Ratio_SW1_LOW 0x80 //1/128
#define Divide_Ratio_SW1_HIGH 0x80 //1/128
#define Divide_Ratio_SW1_LOW 0x100 //1/256
#define Divide_Ratio_SW2_HIGH 0x40 //1/64
#define Divide_Ratio_SW2_LOW 0x80 //1/128
#define Divide_Ratio_SW2_HIGH 0x80 //1/128
#define Divide_Ratio_SW2_LOW 0x100 //1/256

class ULTRA_HIGH_FREQUENCY_PRESCALER{
  ULTRA_HIGH_FREQUENCY_PRESCALER(uint8_t UHFP_INPUT, uint8_t UHFP_OUTPUT, uint8_t UHFP_SW1, uint8_t UHFP_SW2);
  
  //
public:
  
  //
private:
  
  //
protected:
}
