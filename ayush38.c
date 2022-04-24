main()
{
    int num,d,sum=0,ori;
    printf("Enter the number");
    scanf("%d",&num);
    ori=num;
    while (num!=0)
    {
        d=num%10;
        sum=sum*10+d;
        num=num/10;
    }
    if(sum==ori)
    {
        printf("Number is a pallindrome");
    }
    else
    {
        printf("Number is not a pallindrome");
    }
    getch();
    
}