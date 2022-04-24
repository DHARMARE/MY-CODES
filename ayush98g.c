#include<string.h>
main()
{
    char str1[20],str2[20];
    int r;
    printf("Enter two strings");
    scanf("%s %s",str1,str2);
    r=strcmp (str1,str2);
    if(r>0)
    {
        printf("String1 > String2");
    }
    if(r<0)
    {
        printf("String2 > String1");
    }
    if(r==0)
    {
        printf("String1 = String2");
    }
    getch();
}