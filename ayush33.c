main()
{
    int n,m,i=1,fn=1,fm=1,fnm=1;
    float c;
    printf("Enter the values of n and m");
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        while(i<=n)
        {
            fn=fn*i;
            i=i+1;
        }
        i=1;
        while(i<=m)
        {
            fm=fm*i;
            i=i+1;
        }
        while(i<=(n-m))
        {
            fnm=fnm*i;
            i=i+1;
        }
        c=fn/(fm*fnm);
        printf("C = %f ",c);
    }
    else
    {
        printf("Given numbers are not according to the condition");
 }
 getch();
}