#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    float flt;
    int no;
    double db1;
    printf("Enter the value of charachter");
    scanf("%c",&ch);
    printf("Enter the value of float ");
    scanf("%f",&flt);
    printf("Enter the value of double");
    scanf("%lf",&db1);
    printf("Enter the value of integer");
    scanf("%d",&no);
    printf("Charachter is %c , Float is %f , Double is %lf , Integer is %d ",ch,flt,db1,no);
    getch();
    return 0;
}