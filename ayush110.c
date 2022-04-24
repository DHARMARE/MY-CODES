#include"stdio.h"
main()
{
    struct donor
    {
        char name[20],add[30];
        int age;
        char bg[10];
    };
    struct donor d[3];
    int i;
    for(i=0;i<=2;i++)
    {
      printf("Enter the name,address,age and blood group of donor");
      fflush(stdin);
      gets(d[i].name);
      fflush(stdin);
      gets(d[i].add);
      scanf("%d",&d[i].age);
      fflush(stdin);
      gets(d[i].bg);
    }
    for(i=0;i<=2;i++)
    {
        printf("Name : %s\n",d[i].name);
        printf("Address : %s\n",d[i].add);
        printf("Age : %d\n",d[i].age);
        printf("Blood Group : %s\n",d[i].bg);
    }
    getch();
}