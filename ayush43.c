main()
{
    int term=0,i=1,n;
    printf("Emter the number of terms required");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",term);
        term=term*2+1;
        i=i+1;
    }
    getch();
}