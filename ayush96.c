main()
{
    int a[4][4],i,j,flag=0;
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
            if(i=j)
            {
                if(a[i][j]!=1)
                {
                    flag=1;
                    break;
                }
                if(a[i][j]!=0)
                {
                    flag-1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        printf("Matrix is identity");
    }
    else
    {
        printf("Matrix is non identity");
    }
    getch();
}