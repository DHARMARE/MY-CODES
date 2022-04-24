main()
{
    float amt,tamt;
    int n;
    printf("Enter the amount and number of years");
    scanf("%f %d",&amt,&n);
    if(amt<10000)
    {
        tamt = amt + amt*0.13*n;
    }
    else
    {
        tamt = amt + amt*0.18*n;
    }
    printf("Total amount = %f",tamt);
    getch();
}