main()
{
    int x,n,term=1,sum=0,i=1;
    printf("Enter the values of x and n");
    scanf("%d %d",&x,&n);
    while(i<=n)
    {
        sum=sum+term;
        term=term*x;
        i=i+1;
    }
    printf("S=%d",sum);
    getch();
}