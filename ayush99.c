#include"string.h"
main()
{
    char str[30],ori[30];
    int r;
    printf("Enter any string");
    scanf("%s",str);
    strcpy(ori,str);
    strrev(str);
    r=strcmp(str,ori);
    if(r==0)
    {
        printf("Word is a pallindrome");
    }
    else
    {
        printf("Word is not a pallindrome");
    }
    getch();
}