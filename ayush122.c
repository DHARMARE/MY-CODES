#define PI 3.1415
#define MESSAGE printf("Enter the radius")
#define HALT getch()
main()
{
    float r,area;
    MESSAGE;
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area of circle = %f",area);
    HALT;
}