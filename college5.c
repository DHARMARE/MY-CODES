#include"stdio.h"
main()
{
    int var1,var2;
    printf("Enter the value of variable 1");
    scanf("%d",&var1);
    printf("Enter the value of variable 2");
    scanf("%d",&var2);
    if(var1!=var2)
    {
        printf("Variable 1 is not equal to variable 2\n");
        if(var1>var2)
        {
            printf("Variable 1 is greater than variable 2\n");
        }
        else
        {
            printf("Variable 2 is greater than variable 1\n");
        }
    }
    else
    {
        printf("Variable 1 is equal to variable 2\n");
    }
    getch();
}