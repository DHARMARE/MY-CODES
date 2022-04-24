main()
{
    int a[10],i,temp;
    for(i=0;i<=9;i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    temp=a[9];
    for(i=9;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("First Shifting\n");
    for(i=0;i<=9;i++)
    {
        printf("%d",a[i]);
    }
    temp=a[0];
    for(i=0;i<=8;i++)
    {
        a[i]=a[i+1];
    }
    a[9]=temp;
    printf("Second Shifting\n");
    for(i=0;i<=9;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}