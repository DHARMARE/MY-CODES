main()
{
    int num,r;
    printf("Enter the number");
    scanf("%d",&num);
    r=sum(num);
    printf("Sum of digits = %d",r);
    getch();
}
sumd (int x)
{
    int sum=0,d;
    while(x!=0)
    {
        d=x%10;
        sum=sum+d;
        x=x/10;
    }
    return(sum);
}