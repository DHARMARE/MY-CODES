#include<string.h>
main()
{
    char str1[20],str2[20];
    printf("Enter any word");
    scanf("%s",str1);
    strcpy(str2,str1);
    printf("String=%s",str2);
    getch();
}