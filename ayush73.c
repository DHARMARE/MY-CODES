main()
{
    char ch;
    int num;
    void display (char,int);
    printf("Enter a character and an integer");
    scanf("%c %d",&ch,&num);
    display(ch,num);
    getch();
}
void display (char ch1,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%c",ch1);
    }
}