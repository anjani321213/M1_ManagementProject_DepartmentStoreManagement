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
    return 0;
}

    for (i=0; i<=6; i++)
    {
        gotoxy(30,22+i+1);
        printf("%s\n\n\n",menu[i]);
    }
    curser(7);
}

    for (i=0; i<=3; i++)
    {
        gotoxy(30,22+i+1);
        printf("%s\n\n\n",menu[i]);
    }
    curser(4);
}
        switch (count)
        {
        case 1:
            gotoxy(30,23);
            printf(" - By Code          ");
            break;
        case 2:
            gotoxy(30,24);
            printf(" - By Rate          ");
            break;
        case 3:
            gotoxy(30,25);
            printf(" - By Quantity      ");
            break;
        case 4:
            gotoxy(30,26);
            printf(" - Back to main menu");
            break;
        }
    }

    if(no==7)
    {
        //textbackground(11);
        //textcolor(0);
        gotoxy (30,23);
        printf("   Calculate Bill ");
        gotoxy (30,24);
        printf("   Add Goods      ");
        gotoxy (30,25);
        printf("   Edit Goods     ");
        gotoxy (30,26);
        printf("   Display All    ");
        gotoxy (30,27);
        printf("   Search         ");
        gotoxy (30,28);
        printf("   Delete Goods   ");
        gotoxy (30,29);
        printf("   Exit           ");
        //textcolor(0);
        //textbackground(2);
        switch(count)
        {
        case 1:
            gotoxy (30,23);
            printf(" - Calculate Bill ");
            break;
        case 2:
            gotoxy (30,24);
            printf(" - Add Goods      ");
            break;
        case 3:
            gotoxy (30,25);
            printf(" - Edit Goods     ");
            break;
        case 4:
            gotoxy (30,26);
            printf(" - Display All    ");
            break;
        case 5:
            gotoxy (30,27);
            printf(" - Search         ");
            break;
        case 6:
            gotoxy (30,28);
            printf(" - Delete Goods   ");
            break;
        case 7:
            gotoxy (30,29);
            printf(" - Exit           ");
            break;
        }

    while(1)
    {
        gotoxy(25,18);
        printf("                    ");
        gotoxy(25,19);
        printf("                    ");
        gotoxy(25,18);
        printf("enter item code:");
        scanf("%s",x);
        if(strcmp(x,"end")==0)
            break;
        gotoxy(25,19);
        printf("enter quantity:");
        scanf("%d",&q);
        rewind(file);
        while(fread(&item,sizeof(item),1,file))
        {
            if((strcmp(item.code,x)==0))
            {
                total=item.rate*q;
            }
    }
    if(gtotal!=0)
    {
        gotoxy(30,j+5);
        printf("TOTAL AMOUNT = NRs. %6.2f",gtotal);
    }
    fclose(file);
    getch();
    d_mainmenu();
}

    }
    d_mainmenu();
}

    int flag=0,choice;
    char x[ACS],y[ACS];
    FILE *file;
    int size;
    system("cls");
//textcolor(0);
//textbackground(11);
    if (flag==1)
    {
        gotoxy(32,30);
        printf("Item does not exist.");
        gotoxy(36,32);
        printf("TRY ABGAIN");
    }
    getch();
    fclose(file);
    d_mainmenu();
}
    while(fread(&item,sizeof(item),1,file))
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
    getch();
    if (i==26)
    {
        gotoxy(24,30);
        printf("-- no articles found --");
    }
    getch();
    fclose(file);
    d_mainmenu();
}
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
                printf("press any key to see more...........");
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
        printf(" no item found ");
    }
    getch();
    fclose(file);
    d_search();
}

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
        printf("no item found");
    }
    getch();
    fclose(file);
    d_search();
}


void dis_con()
{
    int i;
    system("cls");
    gotoxy(20,10);
    ;
    for (i=1; i<=10; i++)
        printf("*");
    printf(" * FASHION WEAR * ");
    for (i=1; i<=10; i++)
        printf("*");
    printf("\n\n");
    gotoxy(30,11);
    printf("Departmental Store");
//textcolor(1);
    gotoxy(32,17);
    printf("RECORDS") ;
//textcolor(8);
    gotoxy(18,23);
    printf ("SN   Item Name   Item Code      Rate     Quantity");
}

        while (fread(&item,sizeof (item),1,file))
        {
            if(strcmp(item.code,x)!=0)
                fwrite(&item,sizeof(item),1,file1);
        }
        gotoxy(27,29);
        printf("---item deleted---");
        remove("record.txt");
        rename("record1.txt","record.txt");
    }
    if (flag==1)
    {
        gotoxy(25,29);
        printf("---item does not exist---");
        gotoxy(30,31);
        printf("TRY AGAIN");
    }
    fclose(file1);
    fclose(file);
    getch();
    d_mainmenu();
}
