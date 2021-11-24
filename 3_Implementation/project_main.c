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


int main()
{
    d_mainmenu();
    c_code(char[]);
    check(char[]);
    curser(int);
    dbill();
    d_mainmenu();
    display(rec *,int,int);
    window(int,int,int,int);
    dis_con();
    d_search();
    highlight(int,int);
    bill() ;
    edit();
    add();
    del();
    d_code();
    d_rate();
    d_quan();
    d_all();

    return 0;
}


    
