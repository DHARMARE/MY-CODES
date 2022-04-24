main()
{
    float term,sum=0;
    int nr=1,dr=1,x,n,i=1;
    printf("Enter the number of terms required");
    scanf("%d %d",&x,&n);
    while(i<=n)
    {
        term=nr/(dr*1.0);
        sum=sum+term;
        nr=nr*x;
        dr=dr+1;
        i=i+1;
    }
    printf("S=%f",sum);
    getch();
}