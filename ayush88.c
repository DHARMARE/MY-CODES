main()
{
    int a[3][4],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the element");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    getch();
}