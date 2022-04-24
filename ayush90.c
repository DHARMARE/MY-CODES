#include"math.h"
main()
{
    int i,j,a[4][4],sum=0;
    float norm;
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
            sum=sum+a[i][j]*a[i][j];
        }
    }
    norm=sqrt(sum);
    printf("Norm=%f",norm);
    getch();
}