main()
{
    int dd,mm,yy,lastdate;
    printf("Enter the date month and year");
    scanf("%d %d %d",&dd,&mm,&yy);
    dd=dd+1;
    if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
    {
        lastdate=31;
    }
    else
    {
        if(mm==4||mm==6||mm==9||mm==11)
        {
            lastdate=30;
        }
        else
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
    }
    if(dd>lastdate)
    {
        dd=1;
        mm=mm+1;
        if(mm>12)
        {
          mm=1;
          yy=yy+1;  
        }

    }
    printf("%d %d %d",dd,mm,yy);
    getch();
}