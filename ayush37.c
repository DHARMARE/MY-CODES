main()
{
    int num,d,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        sum=sum*10 + d;
        num= num/10;
    }
    printf("Reverse = %d",sum);
    getch();
}