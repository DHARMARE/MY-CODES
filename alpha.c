main()
{
    int x,y;
    for(y=1;y<=25;y++)
    {
        for(x=1;x<=80;x++)
        {
            gotoxy(x,y);
            printf("A");
        }
    }
    getch();
}