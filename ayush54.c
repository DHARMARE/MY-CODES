#include"stdio.h"
main()
{
    int num1,num2;
    char oper;
    float res;
    while(1)
    {
        printf("\nEnter the operator (+,-,/,*) or e for exit");
        fflush(stdin);
        scanf("%c",&oper);
        switch(oper)
        {
            case'+':
                    printf("Enter any two numbers");
                    scanf("%d %d",&num1,&num2);
                    res=num1+num2;
                    printf("Res = %f",res);
                    break;
            case'-':
                    printf("Enter any two numbers");
                    scanf("%d %d",&num1,&num2);
                    res=num1-num2;
                    printf("Res = %f",res);
                    break;
            case'/':
                    printf("Enter any two numbers");
                    scanf("%d %d",&num1,&num2);
                    res=num1/num2;
                    printf("Res = %f",res);
                    break;
            case'*':
                    printf("Enter any two numbers");
                    scanf("%d %d",&num1,&num2);
                    res=num1*num2;
                    printf("Res = %f",res);
                    break;
            default:
                    printf("Invalid operator");
        }
    }
    getch();
}