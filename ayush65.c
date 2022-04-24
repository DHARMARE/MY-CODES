main()
{
    int num1,num2,r;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    r=sum(num1,num2);
    printf("Summation=%d",r);
    getch();
}
sum(int x,int y)
{
    int s;
    s=x+y;
    return(s);
}