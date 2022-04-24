main()
{
    float a,b,c,d,m,n,x,y,term;
    printf("Enter the values of a,b,c,d,m,n");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&m,&n);
    term = (a*d - c*b);
    if (term != 0)
    {
        x = (m*d - n*b)/(a*d - c*b);
        y = (m*c - n*a)/(a*d - c*b);
        printf("X = %f Y = %f",x,y);
    }
    else
    {
        printf("Values of X and Y cannot be displayed");

    }
    getch();    
    
}