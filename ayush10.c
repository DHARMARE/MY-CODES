main()
{
    float amt,tamt;
    int n;
    printf("Enter the amount and number of years");
    scanf("%f %d",&amt,&n);
    tamt = amt+amt*0.13*n;
    printf("Total amount = %f ",tamt);
    getch();
}