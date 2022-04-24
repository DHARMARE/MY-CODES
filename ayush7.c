main()
{
    int num,d1,d2,sum;
    printf("Enter any three digit number");
    scanf("%d",&num);
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    sum = d1+d2+num;
    printf("Sum of three digits = %d",sum);
    getch();
}