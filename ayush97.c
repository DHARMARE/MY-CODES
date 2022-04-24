main()
{
    int i,j,a[4][4],b[4][4],flag=0;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the element");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
        {
            break;
        }
    }
    
    if(flag==0)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is non symmetric");
    }
    getch();
}