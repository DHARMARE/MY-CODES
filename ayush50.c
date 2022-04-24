main()
{
    float a,b,term,sum=0,dr;
    int n,i=1;
    printf("Enter the values of a,b,n");
    scanf("%f %f %d",&a,&b,&n);
    dr=a;
    while(i<=n)
    {
        term=1/dr;
        sum=sum+term;
        dr=dr+b;
        i=i+1;
    }
    printf("S=%f",sum);
    getch();
}