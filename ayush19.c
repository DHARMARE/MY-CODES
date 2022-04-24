main()
{
    int hrs,mins,secs;
    printf("Enter the time in hours, minutes and seconds");
    scanf("%d %d %d",&hrs,&mins,&secs);
    secs = secs+1;
    if(secs==60)
    {
        secs=0;
        mins=mins+1;
        if(mins==60)
        {
            mins=0;
            hrs=hrs+1;
            if(hrs==24)
            {
                hrs=0;
            }
            
        }
    }
    printf("%d %d %d",hrs,mins,secs);
    getch();
}