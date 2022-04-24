main()
{
    int n,term=0,diff=1,i=1;
    printf("Enter the number of terms required");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",term);
        term=term+diff;
        diff=diff*2;
        i=i+1;
    }
    getch();
}