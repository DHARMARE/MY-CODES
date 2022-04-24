#include<stdio.h>
void main()
{
    float length,breadth,area;
    printf("Enter the length and breadth");
    scanf("%f %f",&length,&breadth);
    area = length*breadth;
    printf("Area of rectangle = %f",area);
    getch();
}