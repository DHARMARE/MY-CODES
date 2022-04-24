main()
{
    int num,i;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            printf("Number is not prime");
            break;
        }
    }
    if(i==num)
    {
        printf("Number is prime");
    }
    printf("\nI=%d",i);
    getch();
}