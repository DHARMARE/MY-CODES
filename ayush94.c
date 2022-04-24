main()
{
    int a[6][4],max,r,c,i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the element");
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    r=0;
    c=0;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                r=i;
                c=j;
            }
        }
    }
    printf("Largest element is %d from %d row and %d column",max,r,c);
    getch();
}