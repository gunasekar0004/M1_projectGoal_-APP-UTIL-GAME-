
#include<stdio.h>

#include<stdlib.h>


#include<string.h>
#include"fun.h"

//UNITY_BEGIN();
//UNITY_RUN();
int  addrecord( )

{

    system("cls");

    FILE *fp ;

    char another = 'Y' ,time[10];

    struct record e ;

    char filename[15];

    int choice;

    printf("\n\n\t\t***************************\n");

    printf("\t\t* WELCOME TO THE ADD MENU *");

    printf("\n\t\t***************************\n\n");

    printf("\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");

    fflush(stdin);
     //char file1[20];
  //  fgets(filename, 15, stdin);
  scanf("%s",filename);
 // sprintf(file1, "%s",filename);
    fp = fopen (filename, "ab+" ) ;

    if ( fp == NULL )

    {

        fp=fopen(filename,"wb+");

        if(fp==NULL)

        {

            printf("\nSYSTEM ERROR...");

            printf("\nPRESS ANY KEY TO EXIT");

            getc(stdin);

            return 0;

        }

    }

    while ( another == 'Y'|| another=='y' )

    {

        choice=0;

        fflush(stdin);

        printf ( "\n\tENTER TIME:[hh:mm]:");

        scanf("%s",time);

        rewind(fp);

        while(fread(&e,sizeof(e),1,fp)==1)

        {

            if(strcmp(e.time,time)==0)

            {

                printf("\n\tTHE RECORD ALREADY EXISTS.\n");

                choice=1;

            }

        }

        if(choice==0)

        {

            strcpy(e.time,time);

            printf("\tENTER NAME:");

            fflush(stdin);

            scanf("%s",e.name);

            fflush(stdin);

            printf("\tENTER PLACE:");

            scanf("%s",e.place);

            fflush(stdin);

            printf("\tENTER DURATION:");

          scanf("%s",e.duration);

            fflush(stdin);

            printf("\tNOTE:");

            scanf("%s",e.note);

            fwrite ( &e, sizeof ( e ), 1, fp ) ;

            printf("\nYOUR RECORD IS ADDED...\n");

        }

        printf ( "\n\tADD ANOTHER RECORD...(Y/N) " ) ;

        fflush (stdin) ;

        another = getchar( ) ;

    }
    //TEST_ASSERT(file1,addrecord(filename));

    fclose ( fp ) ;
    
    printf("\n\n\tPRESS ANY KEY TO EXIT...");

    return 0;

}

