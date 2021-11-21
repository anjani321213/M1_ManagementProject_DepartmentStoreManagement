#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

#define ANS 15
#define ACS 4
//declaration of checking functions/
void c_code(char[]);
int check(char[]);



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
    int i;
    char ch;
    const char *menu[]= {"   Calculate Bill","   Add Goods","   Edit Goods","   Display All ","   Search", "   Delete Goods","   Exit"};
    system("cls");
//textbackground(11);
//textcolor(0);
//_setcursortype(_NOCURSOR)

void d_search()
{
  
//textbackground(11);
//textcolor(0);
 
}

//function for cursor movement/
void curser(int no)
{
   //implementation of curser//
}

void highlight(int no,int count)
{
        //textbackground(11);
        //textcolor(0);
}

    
void bill()
{
   //implementation of billing//
}
//function to display bill window/
void dbill()
{
//textcolor(1);

//textcolor(8);
}
//function to add records/
void add ()
{
//textbackground(11);
//textcolor(0);
}

//function to check availability of code/
void c_code(char y[])
{
  //implementation of code//
}

//function for editing/
void edit()
{
//textcolor(0);
//textbackground(11);
}

//function to display all records/
void d_all()
{
  //implementation of diplay all//
}

//function to display by quantity/
void d_quan()
{
  //implementation of quan//
}

//function to display by rate/
void d_rate()
{
  //for displaying the rate//
}

//function to display by code/
void d_code()
{
  //diplay the code//
}

//function to display window for item display/
void dis_con()
{
   //display window for item display//
}


void display(rec *item,int i,int j)
{
//function to display in screen/
}


void del()
{
//function to delete records//
}


int check(char x[ANS])
{
 //function to check validity of code while editing and deleting// 
}


void window(int a,int b,int c,int d)
{
  //function to display box//
}
