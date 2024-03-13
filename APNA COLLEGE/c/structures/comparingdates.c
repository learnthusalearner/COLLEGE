#include<Stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b;

    a.day=19;
    a.month=5;
    a.year=1999;

    b.day=1;
    b.month=5;
    b.year=1999;

    bool flag =true;
    if(a.day != b.day) flag =false;
    if(a.month != b.month) flag =false;
    if(a.year != b.year) flag =false;

    if(flag == true) printf("dates are same");
    else printf("dates are diffrent");





    

}