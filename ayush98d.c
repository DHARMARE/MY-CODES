#include<string.h>
main()
{
    char str[20];
    printf("Enter any word");
    scanf("%s",str);
    strrev(str);
    printf("Reverse=%s",str);
    getch();
}