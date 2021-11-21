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
//declaration of checking functions/
void c_code(char[]);
int check(char[]);
void d_mainmenu()
void d_search()
void curser(int no)
void highlight(int no,int count)
void dbill()
void add ()
void c_code(char y[])
void edit()
void d_all()
void d_quan()
void d_rate()
void d_code()
void dis_con()
void del()





