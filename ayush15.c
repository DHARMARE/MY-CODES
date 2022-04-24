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
    sum = 100*d1 + 10*d2 + num;
    if(ori == sum)
    {
        printf("Number is a palindrome");
    }
    else
    {
        printf("Number is not a palindrome");
    }
    getch();
}