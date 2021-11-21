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
{
    int i;
    char ch;
    const char *menu[]= {"   Calculate Bill","   Add Goods","   Edit Goods","   Display All ","   Search", "   Delete Goods","   Exit"};
    system("cls");
    {
        gotoxy(30,22+i+1);
        printf("%s\n\n\n",menu[i]);
    }
    curser(7);
}

void d_search()
{
    char ch;
    int i;
   
    for (i=0; i<=3; i++)
    {
        gotoxy(30,22+i+1);
        printf("%s\n\n\n",menu[i]);
    }
    curser(4);
}

//function for cursor movement/
void curser(int no)
{
    int count=1;
    char ch='0';
    gotoxy(30,23);
    while(1)
    {
        switch(ch)
        {
        case 80:
            count++;
            if (count==no+1) count=1;
            break;
        case 72:
            count--;
            if(count==0) count=no;
            break;
        }
        highlight(no,count);
        ch=getch();
        if(ch=='\r')
        {
            if(no==7)
            {
                if (count==1) bill() ;
                else if(count==2) add();
                else if(count==3) edit();
                else if (count==4) d_all();
                else if (count==5) d_search();
                else if (count==6) del();
                else   exit(0);
            }
            if(no==4)
            {
                if (count==1) d_code();
                else if (count==2)d_rate();
                else if (count==3) d_quan();
                else d_mainmenu();
            }
        }
    }
}

void highlight(int no,int count)
{
    if (no==4)
    {

}
//function to display bill window/
void dbill()
{
    int i;
    gotoxy(20,10);
//;
    for (i=1; i<=10; i++)
        printf("*");
    printf(" * FASHION WEAR * ");
    for (i=1; i<=10; i++)
        printf("*");
    printf("\n\n");
    gotoxy(30,11);
    printf("Departmental Store");
//textcolor(1);
    gotoxy(32,25);
    printf("CUSTOMER'S BILL") ;
//textcolor(8);
    gotoxy(13,27);
    printf("SN.   Item Name     Quantity     Rate          Total");

}
//function to add records/
void add ()
{
    FILE *file;
    char y[ACS],x[12];
    system("cls");
//textbackground(11);
//textcolor(0);
    gotoxy(25,25);
    printf("Enter new record(Y/N)?");
    while(toupper(getche())=='Y')
    {
        system("cls");
        file=fopen("record.txt","ab");
        c_code(y);
        gotoxy(22,34);
        printf("Enter new record(Y/N)?");

    }
    d_mainmenu();
}

//function to check availability of code/
void c_code(char y[])
{
    int flag;
    FILE *file;
    file=fopen("record.txt","rb");
    while(1)
    {
        system("cls");
        window(20,58,23,36);
        gotoxy(32,18);
        printf(" ADD ARTICLES ")  ;
            if (strcmp(y,item.code)==0)
            {
                flag=0;
                gotoxy(26,30);
                printf("code already exists");
                gotoxy(29,32);
                printf("enter again");
                getch();
                break;
            }
        }
        if (flag==1)
            break;
    }
}

//function for editing/
void edit()
{
    int flag=0,choice;
    char x[ACS],y[ACS];
    FILE *file;
    int size;
    system("cls");
//textcolor(0);
//textbackground(11);
    window(20,63,20,46);
}

//function to display all records/
void d_all()
{
    int i,j=1;
    FILE *file;
    dis_con();
    file=fopen("record.txt","rb");
    rewind(file);
    i=26;
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        display(&item,i,j);
        i++;
        j++;

}

//function to display by quantity/
void d_quan()
{
    int i,j=1;
    int a,b;
    FILE *file;
    dis_con();
    file=fopen("record.txt","rb");
    rewind(file);
    i=26;
   
    }
    getch();
    if (i==26)
    {
        gotoxy(28,30);
        printf(" No items found.");
    }
    getch();
    d_search();
    fclose(file);
}

//function to display by rate/
void d_rate()
{
    int i,j=1;
    float a,b;
    FILE *file;
    dis_con();
    file=fopen("record.txt","rb");
    rewind(file);
    i=26;
    gotoxy(16,20);;
    printf("enter lower range: ");
    scanf("%f",&a);
    gotoxy(16,21);
    printf("enter upper range: ");
    scanf("%f",&b);
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        if((item.rate>=a)&&(item.rate<=b))
        {
            display(&item,i,j);
            i++;
            j++;
           

//function to display by code/
void d_code()
{
    int i,j=1;
    char x[4]= {0};
    FILE *file;
    dis_con();
    file=fopen("record.txt","rb");
    rewind(file);
    i=26;
    gotoxy(16,20);;
    printf("enter item code: ");
    scanf("%s",x);
    fflush(file);
   
//function to display window for item display/
void dis_con()
{
    int i;
    system("cls");
    gotoxy(20,10);
    ;
    for (i=1; i<=10; i++)
        printf("*");
   
}

//function to display in screen/
void display(rec *item,int i,int j)
{
    gotoxy(16,i);//textcolor(13);
   
}

//function to delete records/
void del()
{
    int flag;
    char x[ANS];
    FILE *file,*file1;
    system("cls");

int check(char x[ANS])
{
    FILE *file;
    int flag=1;
    file=fopen("record.txt","rb");
    rewind(file);
    while (fread(&item,sizeof (item),1,file))
    {
        if(strcmp(item.code,x)==0)
        {
            flag=0;
            break;
        }
    }
    fclose(file);
    return flag;
}




