/**
 * @file regist.h
 * @brief 
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _regist_H
#define _regist_H

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

float amount(float rate, int quan, float dis, float vat);
int j, quantity, cash, w = 0;
long cash_received, newt_amount;
float rate, dis, vat, t_amount=0, amount1, float_part;
char itemcode[5], date[20];

#endif
