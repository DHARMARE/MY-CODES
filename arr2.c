main()
{
    int a[50],sum=0,i;
    float s;
    for(i=0;i<=49;i++)
    {
        printf("Enter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=49;i++)
    {
        sum=sum+a[i];
    }
    s=(sum/50.0);
    printf("Average=%f",s);
    getch();
}