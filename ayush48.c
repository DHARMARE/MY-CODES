main()
{
    float term,sum=0,nr=1,x;
    int i=1,p=0,n,dr=1;
    printf("Enter the angle and number of terms");
    scanf("%f %d",&x,&n);
    x=x*3.1415/180;
    while(i<=n)
    {
        term=nr/dr;
        sum=sum+term;
        nr=nr*(-x*x);
        p=p+2;
        dr=dr*(p-1)*p;
        i=i+1;
    }
    printf("cosx=%f",sum);
    getch();
}