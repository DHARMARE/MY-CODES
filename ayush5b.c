main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Before A=%d B=%d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After A=%d B=%d",a,b);
    getch();
}