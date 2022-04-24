main()
{
    int a[10],i,count=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]>0)
        {
            count++;
        }
    }
    printf("No. of positive no.s=%d",count);
    getch();
}