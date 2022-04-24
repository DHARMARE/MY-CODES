#include"stdio.h"
main()
{
    int vote,i,count[5],spvotes=0;
    char another='y';
    for(i=0;i<=4;i++)
    {
        count[i]=0;
    }
    while(another=='y')
    {
        printf("Enter the candidate number");
        scanf("%d",&vote);
        if(vote>=1 && vote<=5)
        {
            count[vote-1]++;
        }
        else
        {
            spvotes++;
        }
        printf("Do you wish to continue[y/n]");
        fflush(stdin);
        scanf("%c",&another);
    }
    for(i=0;i<=4;i++)
    {
        printf("Canditate number %d has votes%d\n",i+1,count[i]);
    }
    printf("Spoilt votes=%d",spvotes);
    getch();
}