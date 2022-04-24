#include<stdio.h>
main()
{
    struct student
    {
        int rno;
        char name[20];
        int m1,m2,m3;
    };
    struct student s1,s2;
    printf("Enter roll no,name,m1,m2,m3 of student 1");
    scanf("%d",&s1.rno);
    gets(s1.name);
    scanf("%d %d %d",&s1.m1,&s1.m2,&s1.m3);
    printf("Enter the roll no,name,m1,m2,m3 of student 2");
    scanf("%d",&s2.rno);
    fflush(stdin);
    gets(s2.name);
    scanf("%d %d %d",&s2.m1,&s2.m2,&s2.m3);
    printf("Roll no:%d\n",s1.rno);
    printf("Name : %s\n",s1.name);
    printf("Marks: %d %d %d\n",s1.m1,s1.m2,s1.m3);
    printf("Roll No:%d\n",s2.rno);
    printf("Name:%s\n",s2.name);
    printf("Marks: %d %d %d\n",s2.m1,s2.m2,s2.m3);
    getch();
}