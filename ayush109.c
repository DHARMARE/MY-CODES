#include<stdio.h>
main()
{
    struct product
    {
        char name[20],mname[20];
        int qty;
        float usp,ucp;
    };
    struct product p[3];
    int i;
    for(i=0;i<=2;i++)
    {
        printf("Enter the name,mname,quantity,unit selling price and unit cost price of the product");
        fflush(stdin);
        gets(p[i].name);
        fflush(stdin);
        gets(p[i].mname);
        scanf("%d %f %f",&p[i].qty,&p[i].usp,&p[i].ucp);
    }
    for(i=0;i<=2;i++)
    {
        printf("Name : %s\n",p[i].name);
        printf("Mname : %s\n",p[i].mname);
        printf("Quantity : %d\n",p[i].qty);
        printf("USP : %f\n",p[i].usp);
        printf("UCP : %f\n",p[i].ucp);
    }
    getch();
}