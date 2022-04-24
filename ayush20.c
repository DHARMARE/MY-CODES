main()
{
    int feet,inches;
    printf("Enter the height in feet and inches");
    scanf("%d %d",&feet,&inches);
    inches=inches+1;
    if(inches==12)
    {
        inches=0;
        feet=feet+1;
    }

    printf("Height is %d %d",feet,inches);
    getch();
}