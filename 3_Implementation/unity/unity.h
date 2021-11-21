#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

#define ANS 15
#define ACS 4
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
}
//declaration of checking functions/
void c_code(char[]);
int check(char[]);

//structure declaration/
typedef struct
{
    char name[ANS],code[ACS];
    float rate;
    int quantity;
} rec;
rec item;

//declaration of display functions/
void curser(int);
void dbill();
void d_mainmenu();
void display(rec *,int,int);
void window(int,int,int,int);
void dis_con();
void d_search();
void highlight(int,int);

//declaration of main menu functions/
void bill() ;
void edit();
void add();
void del();
void exit();

//declaration of display submenu functions/
void d_code();
void d_rate();
void d_quan();
void d_all();

//start of main/
int main()
{
    d_mainmenu();
    return 0;
}

void d_mainmenu()
{
//textbackground(11);
//textcolor(0);
//_setcursortype(_NOCURSOR);
    window(25,50,20,32);
    gotoxy(33,18);
}
void d_search()
{
//textbackground(11);
//textcolor(0);
}

//function for cursor movement/
void curser(int no)
{
}
void highlight(int no,int count)
{
   
  }
//textbackground(11);
//textcolor(0);

void d_all()
    fclose(file);
    d_mainmenu();

//function to display by quantity/
void d_quan()
{
}

//function to display by rate/
void d_rate()
{
}

//function to display by code/
void d_code()
{
}

//function to display window for item display/
void dis_con()
{
       
}

//function to display in screen/
void display(rec *item,int i,int j)
{

}

//function to delete records/
void del()
{
 
}

//function to check validity of code while editing and deleting/
int check(char x[ANS])
{

}

//function to display box/
void window(int a,int b,int c,int d)
{
 
}
