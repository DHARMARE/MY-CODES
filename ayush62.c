main()
{
    int num,r;
    printf("Enter the number");
    scanf("%d",&num);
    r=fact(num);
    printf("Factorial=%d",r);
    getch();
}
fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return(f);
}