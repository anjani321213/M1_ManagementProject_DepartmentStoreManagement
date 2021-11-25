#include "unity.h"
#include <regist.h>

/* Modify these two lines according to the project */
#include <regist.h>
#define PROJECT_NAME    "Store Management System"

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

#define ANS 15
#define ACS 4
COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void c_code(char[]);
int check(char[]);

typedef struct
{
    char name[ANS],code[ACS];
    float rate;
    int quantity;
} rec;
rec item;

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
