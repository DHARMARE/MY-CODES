main()
{
    int n,m,fn,fm,fnm;
    float c;
    printf("Enter the value of n and m");
    scanf("%d %d",&n,&m);
    fn=fact(n);
    fm=fact(m);
    fnm=fact(n-m);
    c=(fn*1.0)/(fm*fnm);
    printf("C=%f",c);
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