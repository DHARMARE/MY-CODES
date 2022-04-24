main()
{
    int num,d,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    printf("Sum of digits is = %d ",sum);
    getch();
}