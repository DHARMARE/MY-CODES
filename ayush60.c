#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,pxy,p26,p4x;
    float s;
    printf("Enter the value of x and y");
    scanf("%d %d",&x,&y);
    pxy=pow(x,y);
    p26=pow(2,6);
    p4x=pow(4,x);
    s=(pxy*p26)/p4x;
    printf("S=%f",s);
    getch();
    return 0;
}