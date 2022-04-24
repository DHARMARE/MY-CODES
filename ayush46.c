main()
{
    float term,sum=0,nr=1,x;
    int dr=1,i=1,n;
    printf("Enter the values of x and n");
    scanf("%f %d",&x,&n);
    while(i<=n)
    {
        term=nr/dr;
        sum=sum+term;
        nr=nr*x;
        dr=dr*i;
        i=i+1;
    }
    printf("Expn = %f",sum);
    getch();
}