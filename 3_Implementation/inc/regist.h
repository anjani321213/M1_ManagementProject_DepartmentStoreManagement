/**
 * @file StoreManagement.h
 * @brief 
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

#define ANS 15
#define ACS 4

void c_code(char[]);
int check(char[]);

void curser(int);
void dbill();
void d_mainmenu();
void display(rec *,int,int);
void window(int,int,int,int);
void dis_con();
void d_search();
void highlight(int,int);

void bill() ;
void edit();
void add();
void del();
void exit();


void d_code();
void d_rate();
void d_quan();
void d_all();


int main()
{
    d_mainmenu();
    return 0;
}








