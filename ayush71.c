main()
{
    float a,s;
    float square(float);
    printf("Enter the value of a");
    scanf("%f",&a);
    s=square(a);
    printf("Square=%f",s);
    getch();
}
float square(float a1)
{
    float sq;
    sq=a1*a1;
    return(sq);
}