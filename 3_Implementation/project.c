#include<stdio.h>

#include<stdlib.h>


#include<string.h>


#include"fun.h"


int addrecord();
int viewrecord();
int deleterecord();
int editrecord();



int main()

{

    int ch;
    char filename[15];

  
    while(1)

    {
         printf("\n\n\tPERSONAL NOTES\t");

        printf("\n\n\t\tMAIN MENU:");

        printf("\n\n\tADD RECORD\t[1]");

        printf("\n\tVIEW RECORD\t[2]");

        printf("\n\tEDIT RECORD\t[3]");

        printf("\n\tDELETE RECORD\t[4]");

        printf("\n\tEXIT\t\t[5]");

        printf("\n\n\tENTER YOUR CHOICE:");
      
        scanf("%d",&ch);


        switch(ch)

        {

        case 1:

         // fgets(filename, 15,stdin);
           addrecord();

            break;

       case 2:

            viewrecord();

            break;

        case 3:

            editrecord();

            break;

        case 4:

            deleterecord();

            break;

        case 5:

            printf("\n\n\t\tTHANK YOU FOR USING THE NOTES");

            getc(stdin);

            exit(0);

        default:

            printf("\nYOU ENTERED WRONG CHOICE..");

            printf("\nPRESS ANY KEY TO TRY AGAIN");

            getc(stdin);

            break;

        }

        system("cls");

    }

    return 0;

}

