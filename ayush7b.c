main()
{
    int num,d1,d2,d3,sum;
    printf("Enter any four digit number");
    scanf("%d",&num);
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    d3 = num%10;
    num = num/10;
    sum = num+d1+d2+d3;
    printf("Sum of four digits = %d ",sum);
    getch();
}