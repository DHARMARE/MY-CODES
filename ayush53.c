#include"stdio.h"
main()
{
    int num1,num2;
    char oper;
    float res;
    printf("Enter any two numbers");
    scanf("%d %d",&num1,&num2);
    printf("Enter the operator (+,-,*,/)");
    fflush(stdin);
    scanf("%c",&oper);
    switch (oper)
    {
        case'+':
                res=num1+num2;
                printf("%f",res);
                break;
        case'-':
                res=num1-num2;
                printf("%f",res);
                break;
        case'*':
                res=num1*num2;
                printf("%f",res);
                break;
        case'/':
                res=num1/num2;
                printf("%f",res);
                break;
        default:
                printf("Invalid Operator");
    }
     getch();
}
