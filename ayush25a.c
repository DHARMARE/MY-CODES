main()
{
    int mm,yy,lastdate;
    printf("Enter the month(1-12) and year");
    scanf("%d %d",&mm,&yy);
    if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
    {
        lastdate = 31;
    }
    if(mm==4||mm==6||mm==9||mm==11)
    {
        lastdate = 30;
    }
    if(mm==2)
    {
        if((yy%100==0 && yy%400==0)||(yy%100!=0 && yy%4==0))
        {
            lastdate=29;
        }
        else
        {
            lastdate=28;
        }
    }
    printf("Last Date = %d ",lastdate);
    getch();
}