#include<string.h>
main()
{
    char str[20];
    printf("Enter any word");
    scanf("%s",str);
    strupr(str);
    printf("Converted string : %s",str);
    getch();
}