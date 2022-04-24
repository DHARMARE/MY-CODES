main()
{
    int a,b,c,d,e,r;
    printf("Enter any five numbers");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    r=maximum(a,b,c,d,e);
    printf("Maximum=%d",r);
    getch();
}
maximum(int a1,int b1,int c1,int d1,int e1)
{
    int max;
    max=a1;
    if(b1>a1)
    {
        max=b1;
    }
    if(c1>b1)
    {
        max=c1;
    }
    if(d1>c1)
    {
        max=d1;
    }
    if(e1>d1)
    {
        max=e1;
    }
    return(max);
}