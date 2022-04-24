main()
{
    float hard,cc,ts;
    printf("Enter the values of hardness,carbon contents and tensile strength");
    scanf("%f %f %f",&hard,&cc,&ts);
    if(hard>50 && cc<0.7 && ts>=5600)
    {
        printf("The grade of steel is 10");
    }
    if(hard>50 && cc<0.7 && ts<5600)
    {
        printf("The grade of steel is 9");
    }
    if(hard<=50 && cc<0.7 && ts>=5600)
    {
        printf("The grade of steel is 8 ");
    }
    if(hard>50 && cc>=0.7 && ts>=5600)
    {
        printf("The grade of steel is 7");
    }
    if (hard>50 && cc>=0.7 && ts<5600)||(hard<=50 && cc<0.7 && ts<5600)||(hard<=50 && cc>=0.7 && ts>=5600)
    {
        printf("The grade of steel is 8");
    }
    
    {
        printf("The grade of steel is 6");
    }
    if(hard<=50 && >=0.7 && ts<5600)
    {
        printf("The grade of steel is 5");
    }
    getch()
}