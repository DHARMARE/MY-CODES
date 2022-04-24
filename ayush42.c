main()
{
    int num,d,sum=0,w=1;
    printf("Enter the decimal number");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%2;
        sum=sum+d*w;
        w=w*10;
        num=num/2;
    }
    printf("Binary=%d",sum);
    getch();
}