main()
{
    float nr,term,sum=0,x;
    int dr=1,p=1,i=1,n;
    printf("Enter the angle and number of terms");
    scanf("%f %d",&x,&n);
    x=x*3.1415/180;
    nr=x;
    while(i<=n)
    {
        term=nr/dr;
        sum=sum+term;
        nr=nr*-(x*x);
        p=p+2;
        dr=dr*(p-1)*p;
        i=i+1;
    }
    printf("sinx=%f",sum);
    getch();
}