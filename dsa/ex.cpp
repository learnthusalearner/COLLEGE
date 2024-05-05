#include<stdio.h>
#include<conio.h>

void main()
    {
    struct  emp;
    {
      int id;
      float salary;
      int mobile;
    };

    struct emp e1,e2,e3;
    printf("entered id,salary,mobile");
    scanf("%d %f %d",&e1.id,&e1.salary,e1.mobile);
    scanf("%d %f %d",&e2.id,&e2.salary,e2.mobile);
    scanf("%d %f %d",&e3.id,&e3.salary,e3.mobile);
    printf("entered result");
    printf("in %d %f %d",&e1.id,&e1.salary,e1.mobile);
    printf("in %d %f %d",&e1.id,&e1.salary,e1.mobile);
    printf("in %d %f %d",&e1.id,&e1.salary,e1.mobile);
    getch();



    
}