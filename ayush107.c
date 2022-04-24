#include<stdio.h>
main()
{
    struct emp
    {
        char name[20];
        int age;
        float bs;
    };
    struct emp e[5];
    for(i=0;i<=4;i++)
    {
        printf("Enter the name,age and bs");
        fflush(stdin);
        gets(e[i].name);
        scanf("%d %f",&e[i].age,&e[i].bs);
    }
    for(i=0;i<=4;i++)
    {
        printf("Name:%s",e[i].name);
        printf("Age:%d",e[i].age);
        printf("BS: %f",e[i].bs);
    }
    getch();
}