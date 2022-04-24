main()
{
    float x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter the x and y coordinates of 3 points");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    m1 = y2 - y1/x2 - x1;
    m2 = y3 - y1/x3 - y1;
    if(m1 == m2)
    {
        printf("Points are collinear");
    }
    else
    {
        printf("Points are non collinear");
    }
    getch();
}