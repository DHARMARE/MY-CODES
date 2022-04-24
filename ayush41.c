main()
{
    int num,d,sum=0,w=1;
    printf("Enter the binary number");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        sum=sum+d*w;
        w=w*2;
        num=num/10;
    }
    printf("The decimal form of the given binary number is %d",sum);
    getch();
}