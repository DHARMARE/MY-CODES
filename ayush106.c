#include<stdio.h>
main()
{
    struct complex
    {
        float real,img;
    };
    struct complex c1,c2,c3;
    printf("Enter the real and imaginary part of c1");
    scanf("%f %f",&c1.real,c1.img);
    printf("Enter the real and imaginary part of c2");
    scanf("%f %f",&c2.real,&c2.img);
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("%f %f",c3.real,c3.img);
    getch();
}