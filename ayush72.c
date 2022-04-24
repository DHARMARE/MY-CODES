main()
{
    float num1,num2,r;
    float sum (float,float);
    printf("Enter two numbers");
    scanf("%f %f",&num1,&num2);
    r=num1+num2;
    printf("Summation=%f",r);
    getch();
}
float sum (float x,float y)
{
    float s;
    s=x+y;
    return(s);
}