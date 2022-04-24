main()
{
    int i,j,a[6][4],sum=0;
    float avg;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the element");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    avg=sum/24.0;
    printf("Average=%f",avg);
    getch();
}