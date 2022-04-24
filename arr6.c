main()
{
    int x[10],y[10],i,sumx=0,sumy=0,sumxy=0,sumxx=0;
    float s;
    for(i=0;i<=9;i++)
    {
        printf("Enter the element of array x");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("Enter the elements of array y");
        scanf("%d",&y[i]);
    }
    for(i=0;i<=9;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+x[i]*y[i];
        sumxx=sumxx+x[i]*x[i];
    }
    s=(10.0*sumxy-sumx*sumy)/(sumxx-(sumx*sumx));
    printf("S=%f",s);
    getch();
}