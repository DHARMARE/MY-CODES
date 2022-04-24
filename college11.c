//To demonstrate use of do while loop
#include<stdio.h>
int main()
{
    int i;
    printf("Whole no is \n");
    for(i=0;i<=10;i++)
    {
        if(i==5)
        continue;
        printf("%d",i);
    }
    return 0;
}