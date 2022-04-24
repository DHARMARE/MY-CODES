main()
{
    int a[4][4],i,j,r1sum,r2sum,r3sum,r4sum,c1sum,c2sum,c3sum,c4sum;
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
           for(i=;i<=)
        }
    }
    printf("R1 sum=%d\nR2 sum=%d\nR3 sum=%d\nR4 sum=%d\n",r1sum,r2sum,r3sum,r4sum);
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
           if(i<=4 && j==1)
           {
               c1sum=i+j;
           }
           if(i<=4 && j==2)
           {
               c2sum=i+j;
           }
           if(i<=4 && j==3)
           {
               c3sum=i+j;
           }
           if(i<=4 && j==4)
           {
               c4sum=i+j;
           }
        }
    }
    printf("C1 sum=%d\nC2 sum=%d\nC3 sum=%d\nC4 sum=%d\n",c1sum,c2sum,c3sum,c4sum);
    getch();
}