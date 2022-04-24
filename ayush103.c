#include<stdio.h>
main()
{
    struct emp
    {
        char name[20];
        int age;
        float bs;
    };
    struct emp e1,e2;
    printf("Enter the name,age,bs of empl 1");
    gets(e1.name);
    scanf("%d %f",&e1.age,&e1.bs);
    printf("Enter the name,age,bs of empl 2");
    fflush(stdin);
    gets(e2.name);
    scanf("%d %f",&e2.age,&e2.bs);
    printf("Emp 1 : %s %d %f\n",e1.name,e1.age,e1.bs);
    printf("Emp 2 : %s %d %f\n",e2.name,e2.age,e2.bs);
    getch();
}