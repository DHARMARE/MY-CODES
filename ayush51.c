main()
{
    int nr=1,dr=1,n,i=1;
    float term,sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        term=nr/(dr*1.0);
        sum=sum+term;
        nr=nr+1;
        dr=dr*(i+1);
        i=i+1;
    }
    printf("S=%f",sum);
    getch();
}