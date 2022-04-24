main()
{
    float x,term,sum=0,nr;
    int dr=1,i=1,n;
    printf("Enter the values of x and n");
    scanf("%f %d",&x,&n);
    nr=(x-1)/x;
    while(i<=n)
    {
        term=nr/dr;
        sum=sum+term;
        nr=nr*(x-1)/x;
        dr=dr+1;
        i=i+1;
    }
    printf("log(1+x)=%f",sum);
    getch();
}