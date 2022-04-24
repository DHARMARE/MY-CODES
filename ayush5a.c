main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Before A=%d B=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("After A=%d B=%d",a,b);
    getch();

}