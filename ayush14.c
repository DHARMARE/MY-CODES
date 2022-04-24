main()
{
    int num,d1,d2,sum,ori;
    printf("Enter a three digit integer number");
    scanf("%d",&num);
    ori = num;
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    sum = d1*d1*d1 + d2*d2*d2 + num*num*num;
    if(sum == ori)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is not Armstrong");
    }
    getch();
}