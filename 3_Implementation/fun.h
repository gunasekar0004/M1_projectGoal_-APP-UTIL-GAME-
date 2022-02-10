#ifndef FUN__H_
#define FUN__H_

struct record

{

    char time[6];

    char name[30];

    char place[25];

    char duration[10];

    char note[500];

} ;

int addrecord();
int viewrecord();
int deleterecord();
int editrecord();


#endif 