main()
{
    int a=10,b=20;
    void fn(int,int);
    fn(a,b);
    printf("A=%d B=%d",a,b);
    getch();
}
void fn(int x,int y)
{
    x=x+100;
    y=y+100;
}