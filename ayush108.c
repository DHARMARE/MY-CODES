#include<stdio.h>
main()
{
    struct student
    {
        int rno;
        char name[20];
        int m1,m2,m3;
    };
    struct student s[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter the roll no,name,m1,m2,m3 of student");
        scanf("%d",&s[i].rno);
        gets(s[i].name);
        scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
    }
    for(i=0;i<=4;i++)
    {
        printf("Roll no : %d\n",s[i].rno);
        printf("Name : %s\n",s[i].name);
        printf("Marks : %d %d %d\n",s[i].m1,s[i].m2,s[i].m3);
    }
    getch();
}