#include<windows.h>
#include<stdio.h>
//declaration of checking functions/
void c_code(char[]);
int check(char[]);
//start of main/

void d_mainmenu()
{
    int i;
    char ch;
    const char *menu[]= {"   Calculate Bill","   Add Goods","   Edit Goods","   Display All ","   Search", "   Delete Goods","   Exit"};
    system("cls");
//textbackground(11);
//textcolor(0);
//_setcursortype(_NOCURSOR);
    window(25,50,20,32);
    gotoxy(33,18);
    printf("MAIN MENU");
    for (i=0; i<=6; i++)
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
    const char *menu[]= {"   By Code","   By Rate","   By Quantity","   Back to main menu"};
    system("cls");
//textbackground(11);
//textcolor(0);
    window(25,50,20,32);
    gotoxy(33,18);
    for (i=0; i<=3; i++)
    {
        gotoxy(30,22+i+1);
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
        //textbackground(11);
        //textcolor(0);
        gotoxy(30,23);
        gotoxy(30,24);
        gotoxy(30,25);
        gotoxy(30,26);
        //textcolor(0);
        //textbackground(2);
        switch (count)
        {
        case 1:
            gotoxy(30,23);
            break;
        case 2:
            gotoxy(30,24);
            break;
        case 3:
            gotoxy(30,25);
            break;
        case 4:
            gotoxy(30,26);
            break;
        }
    }

    if(no==7)
    {
        //textbackground(11);
        //textcolor(0);
        gotoxy (30,23);
        gotoxy (30,24);
        gotoxy (30,25);
        gotoxy (30,26);
        gotoxy (30,27);
        gotoxy (30,28);
        gotoxy (30,29);
    

void bill()
{
    char x[4]= {0};
    int j=29,q=0,size=0,i=1;
    float total=0,gtotal=0;
    FILE *file;
    file=fopen("record.txt","r+b");
    rewind(file);
    system("cls");
    dbill();
    gotoxy(26,15);
    while(1)
    {
        gotoxy(25,18);
        gotoxy(25,19);
        gotoxy(25,18);
        scanf("%s",x);
        if(strcmp(x,"end")==0)
            break;
        gotoxy(25,19);
        scanf("%d",&q);
        rewind(file);
        while(fread(&item,sizeof(item),1,file))
        {
            if((strcmp(item.code,x)==0))
            {
                total=item.rate*q;
                gotoxy(11,j);
                gtotal=gtotal+total;
                size=sizeof(item);
                item.quantity=item.quantity-q;
                j+=2;
                i++;
                fseek(file,-size,SEEK_CUR);
                fwrite(&item,sizeof(item),1,file);
                break;
            }
        }
    }
    if(gtotal!=0)
    {
        gotoxy(30,j+5);
    }
    fclose(file);
    getch();
    d_mainmenu();
}
//function to display bill window/
void dbill()
{
    int i;
    gotoxy(20,10);
//;
    for (i=1; i<=10; i++)
    for (i=1; i<=10; i++)
    gotoxy(30,11);
//textcolor(1);
    gotoxy(32,25);
//textcolor(8);
    gotoxy(13,27);

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
    while(toupper(getche())=='Y')
    {
        system("cls");
        file=fopen("record.txt","ab");
        c_code(y);
        strcpy(item.code,y);
        gotoxy(22,28);
        scanf("%f",&item.rate);
        gotoxy(22,30);
        gotoxy(22,32);
        gotoxy(22,34);
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
        flag=1;
        rewind(file);
        gotoxy(22,25);
        while(fread(&item,sizeof(item),1,file)==1)
        {
            if (strcmp(y,item.code)==0)
            {
                flag=0;
                gotoxy(26,30);
                gotoxy(29,32);
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
    gotoxy(35,18);
    gotoxy(25,23);
    flag=check(x);
    if(flag==0)
    {
        file=fopen("record.txt","r+b");
        rewind(file);
        while (fread(&item,sizeof (item),1,file))
        {
            if(strcmp(item.code,x)==0)
            {
                //textcolor(0);
                gotoxy(25,27);
                gotoxy(25,28);
                gotoxy(25,29);
                gotoxy(25,30);
                gotoxy(25,32);;
                fflush(file);
                if(toupper(getche())=='Y')
                {
                    //textcolor(0);
                    gotoxy(25,34);
                    gotoxy(25,35);
                    gotoxy(25,36);
                    gotoxy(25,37);
                    gotoxy(25,39);  ;
                    scanf("%d",&choice);
                    switch(choice)
                    {
                    case 1:
                        system("cls");
                        window(23,48,20,40);
                        gotoxy(35,18);
                        gotoxy(25,24);
                        size=sizeof(item);
                        fseek(file,-size,SEEK_CUR);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    case 2:
                        system("cls");
                        window(23,65,20,40);
                        gotoxy(35,18);
                        printf("EDIT RECORDS");
                        gotoxy(25,24);
                        c_code(y);
                        strcpy(item.code,y);
                        size=sizeof(item);
                        fseek(file,-size,SEEK_CUR);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    case 3:
                        system("cls");
                        window(23,65,20,40);
                        gotoxy(35,18);
                        printf("EDIT RECORDS");
                        gotoxy(25,24);
                        printf(" enter new rate: ");
                        scanf("%f",&item.rate);
                        size=sizeof(item);
                        fseek(file,-size,SEEK_CUR);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    case 4:
                        system("cls");
                        window(23,65,20,40);
                        gotoxy(35,18);
                        gotoxy(25,24);
                        size=sizeof(item);
                        fseek(file,-size,1);
                        fwrite(&item,sizeof(item),1,file);
                        break;
                    }
                    gotoxy(27,30);
                    break;
                }
            }
        }
    }
    if (flag==1)
    {
        gotoxy(32,30);
        gotoxy(36,32);
    }
    getch();
    fclose(file);
    d_mainmenu();
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
        if ((j%20)==0)
        {
            gotoxy(27,47);//textcolor(0)/;
            getch();
            system("cls");
            dis_con();
            i=26;
            continue;
        }
    }
    getch();
    if (i==26)
    {
        gotoxy(24,30);
    }
    getch();
    fclose(file);
    d_mainmenu();
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
    gotoxy(16,20);;
    gotoxy(16,21);
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        if((item.quantity>=a)&&(item.quantity<=b))
        {
            display(&item,i,j);
            i++;
            j++;
            if ((j%20)==0)
            {
                gotoxy(27,47);
                printf("Press any key to see more...........");
                getch();
                system("cls");
                dis_con();
                i=26;
                continue;
            }
        }
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
    gotoxy(16,21);;
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        if((item.rate>=a)&&(item.rate<=b))
        {
            display(&item,i,j);
            i++;
            j++;
            if ((j%20)==0)
            {
                gotoxy(27,47);
                getch();
                system("cls");
                dis_con();
                i=26;
                continue;
            }
        }
    }
    getch();
    if (i==26)
    {
        gotoxy(28,30);
    }
    getch();
    fclose(file);
    d_search();
}

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
    fflush(file);
    while(fread(&item,sizeof(item),1,file))
    {
        if((strcmp(item.code,x)==0))
        {
            display(&item,i,j);
            i++;
            j++;
            break;
        }
    }
    if (i==26)
    {
        gotoxy(28,30);
    }
    getch();
    fclose(file);
    d_search();
}

//function to display window for item display/
void dis_con()
{
    int i;
    system("cls");
    gotoxy(20,10);
    ;
    for (i=1; i<=10; i++)
    for (i=1; i<=10; i++)
    gotoxy(30,11);
//textcolor(1);
    gotoxy(32,17);
//textcolor(8);
    gotoxy(18,23);
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
//textbackground(11);
//textcolor(0);
    window(23,51,25,34);
    gotoxy(29,18);
    gotoxy(27,27);
    scanf("%s",x);
    flag=check(x);
    if(flag==0)
    {
        file1=fopen("record1.txt","ab");
        file=fopen("record.txt","rb");
        rewind(file);
        while (fread(&item,sizeof (item),1,file))
        {
            if(strcmp(item.code,x)!=0)
                fwrite(&item,sizeof(item),1,file1);
        }
        gotoxy(27,29);
        remove("record.txt");
        rename("record1.txt","record.txt");
    }
    if (flag==1)
    {
        gotoxy(25,29);
        gotoxy(30,31);
        printf("TRY AGAIN");
    }
    fclose(file1);
    fclose(file);
    getch();
    d_mainmenu();
}

//function to check validity of code while editing and deleting/
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

//function to display box/
void window(int a,int b,int c,int d)
{
    int i;
    system("cls");
    gotoxy(20,10);
//textcolor(1);
    for (i=1; i<=10; i++)
    for (i=1; i<=10; i++)
//textcolor(4);
    for (i=a; i<=b; i++)
    {
        gotoxy(i,17);
        gotoxy(i,19);
        gotoxy(i,c);
        gotoxy(i,d);
    }

    gotoxy(a,17);
    gotoxy(a,18);
    gotoxy(a,19);
    gotoxy(b,17);
    gotoxy(b,18);
    gotoxy(b,19);
//textcolor(4);
    for(i=c; i<=d; i++)
    {
        gotoxy(a,i);
        gotoxy(b,i);
    }
    gotoxy(a,c);
    gotoxy(a,d);
    gotoxy(b,c);
    gotoxy(b,d);
//textbackground(11);
//textcolor(0);
}
