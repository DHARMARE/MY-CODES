#include<string.h>
main()
{
    char str1[20],str2[20];
    printf("Enter two strings");
    scanf("%s %s",str1,str2);
    strcat(str1,str2);
    printf("String 1:%s",str1);
    printf("String 2:%s",str2);
    getch();
}