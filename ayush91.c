#include"stdio.h"
main()
{
    int i,j,a[4][4],dsum=0,usum=0,lsum=0;
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
            if(i==j)
            {
                dsum=dsum+a[i][j];
            }
            if(j<i)
            {
                usum=usum+a[i][j];
            }
            if(i>j)
            {
                lsum=lsum+a[i][j];
            }
        }
    }
    printf("Dsum=%d\nUsum=%d\nLsum=%d\n",dsum,usum,lsum);
    getch();
}