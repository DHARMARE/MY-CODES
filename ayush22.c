main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enter the marks of five subjects");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
    {
        printf("Congrats !! you have passed ");
        per = (m1+m2+m3+m4+m5)/5.0;
        printf("Percentage = %f",per);
    }
    else
    {
        printf("Sorry you have failed");
    }
    getch();
}

