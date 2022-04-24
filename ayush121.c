#define DIM 100
main()
{
    int a[DIM],i;
    for(i=0;i<=DIM-1;i++)
    {
        printf("Enter the elements");
        scanf("%d",a[i]);
    }
    for(i=0;i<=DIM-1;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}