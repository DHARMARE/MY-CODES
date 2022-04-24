main()
{
    int year;
    printf("Enter the number");
    scanf("%d",&year);
    if((year%100==0 && year%400==0)||(year%100!=0 && year%4==0))
    {
        printf("Year is a leap year");
    }
    else
    {
        printf("Year is not a leap year");
    }
    getch();
}