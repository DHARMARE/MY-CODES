main()
{
    int x,y,p=1,i=1;
    printf("Enter the values of x and y");
    scanf("%d %d",&x,&y);
    while(i<=y)
    {
        p=p*x;
        i=i+1;
    }
    printf("X raise to y is = %d",p);
    getch();
}