main()
{
    int i,a[10],pos,max;
    for(i=0;i<=9;i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    max=a[0];
    pos=0;
    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i;
        }
    }
    printf("%d is maximum at %d position",max,pos);
    getch();
}