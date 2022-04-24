main()
{
    int a[10],i,num,flag=0;
    for(i=0;i<=9;i++)
    {
        printf("Enter the element");
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched");
    scanf("%d",&num);
    for(i=0;i<=9;i++)
    {
        if(a[i]==num)
        {
            printf("Number is present");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number is not present");
    }
    getch();
}