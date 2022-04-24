#include<stdio.h>
main()
{
    int i,num,sum=0,count=0;
    char another='y';
    float avg;
    while(another=='y')
    {
        printf("Enter the number");
        scanf("%d",&num);
        sum=sum+num;
        count++;
        printf("Do you wish to continue[y/n]");
        fflush(stdin);
        scanf("%c",&another);
    }
    avg=sum/(count*1.0);
    printf("Average=%f",avg);
    getch();
}