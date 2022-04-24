main()
    {
        float x,y;
        printf("Enter the x and y coordinates");
        scanf("%f %f",&x,&y);
        if(x>0 && y>0)
        {
            printf("Point lies in the first quadrant");
        }
        if (x<0 && y>0)
        {
            printf("Point lies in the second quadrant");
        }
        if(x<0 && y<0)
        {
            printf("Point lies in the third quadrant");
        }
        if(x>0 && y<0)
        {
            printf("Point lies in the fourth quadrant");
        }
        if(x==0 && y!=0)
        {
            printf("Point lies on the y axis");
        }
        if(x!=0 && y==0)
        {
            printf("Point lies on the x axis");
        }
        if(x==0 && y==0)
        {
            printf("point lies on the origin");
        }
        getch();


        
    }
