main()
{
    int num,r;
    printf("Enter any number");
    scanf("%d",&num);
    r=iseven(num);
    if(r==1)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    getch();
}
iseven(int n)
{
    if(n%2==0)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}