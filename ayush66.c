main()
{
    int a,b,r;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
    r=mypow(a,b);
    printf("A raise to B=%d",r);
    getch();
}
mypow(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    return(p);
}