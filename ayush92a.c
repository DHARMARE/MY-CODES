#include"stdio.h"
main()
{
    int i,j,a[4][4],b[4][4];
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("Enter the element");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("Original Matrix\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    getch();
}