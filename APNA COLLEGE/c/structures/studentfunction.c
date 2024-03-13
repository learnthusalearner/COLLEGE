#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct student {
        int roll;
        char name[1024];
        char department[1024];
        char course[1024];
        int year;
    }student;

    void check(student S1,student S2){
        bool flag =false;
        if(S1.department==S2.department); {
            flag=true;
        }
    if(flag==true) printf("same department");
    else printf("different department");
        return;
    }
    int main(){

    student S1,S2;

    strcpy(S1.name,"A");
    S1.roll=22;
    strcpy(S1.course,"Btech");
    strcpy(S1.department,"CSE");
    S1.year=2023;

    strcpy(S2.name,"B");
    S2.roll=23;
    strcpy(S2.course,"Btech");
    strcpy(S2.department,"CSE");
    S2.year=2023;
    

    check(S1,S2);
}

