main()
{
    int a[25],b[24],c[23],d[22],i;
    for(i=0;i<=24;i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=23;i++)
    {
        b[i]=a[i+1]-a[i];
    }
    printf("Array B");
    for(i=0;i<=23;i++)
    {
        printf("%d\n",b[i]);
    }
    for(i=0;i<=22;i++)
    {
        c[i]=b[i+1]-b[i];
    }
    printf("Array C");
    for(i=0;i<=22;i++)
    {
        printf("%d\n",c[i]);
    }
    for(i=0;i<=21;i++)
    {
        d[i]=c[i+1]-c[i];
    }
    printf("Array D");
    for(i=0;i<=21;i++)
    {
        printf("%d\n",d[i]);
    }
    getch();
}