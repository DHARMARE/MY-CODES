main()
{
    int num,i=1,fact=1;
    printf("Enter the number");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("Factorial = %d ",fact);
    getch();
}