#include<string.h>
main()
{
    char str[20];
    int r;
    printf("Enter any word");
    scanf("%s",str);
    r=strlen(str);
    printf("No. of charachters = %d",r);
    getch();
}