main()
{
    int num,i,n,sum=0;
    float avg;
    printf("Kitne numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the actual numbers");
        scanf("%d",&num);
        sum=sum+num;
    }
    avg=sum/(n*1.0);
    printf("Average=%f",avg);
    getch();
}