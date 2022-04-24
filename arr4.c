main()
{
    int a[10],i,count=0,num;
    for(i=0;i<=9;i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    printf("Enter the number");
    scanf("%d",&num);
    for(i=0;i<=9;i++)
    {
        if(a[i]==num)
        {
            count++;
        }
    }
    printf("%d occurs %d times",num,count);
    getch();
}