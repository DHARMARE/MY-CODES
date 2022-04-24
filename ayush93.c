main()
{
    int a[4][4],b[4][4],c[4][4],i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the elements of matrix A");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the elements of matrix B");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Required Matrix :\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    getch();
}