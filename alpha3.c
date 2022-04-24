main()
{
    int i,a,b,sum=0,temp;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    i=a;
    while(i<=b)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Summation = %d ",sum);
    getch();
}