main()
{
    int f1=0,f2=1,f3=1,i=3,n;
    printf("Enter the number of terms required");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",f1);
    }
    if(n==2)
    {
        printf("%d %d",f1,f2);
    }
    if(n>2)
    {
        printf("%d %d",f1,f2);
        while(i<=n)
        {
            f3=f1+f2;
            printf("%d",f3);
            f1=f2;
            f2=f3;
            i=i+1;
        }
    }
    getch();
}