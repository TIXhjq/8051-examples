#include <mcs51/8051.h>

#ifndef __DEFINES_H__
#define __DEFINES_H__

#define __nop() __asm nop __endasm

// 晶震频率
#define CRYSTAL_FREQUENCY 11.0592

// 定义HC-SR04引脚
#define HC_SR04_TRIGGER   P0_0
#define HC_SR04_ECHO      P0_1

// 定义LCD1602引脚
#define LCD1602_RS        P1_0
#define LCD1602_RW        P1_0
#define LCD1602_EN        P1_0
#define LCD1602_DATA_PORT P1_0

#endif
