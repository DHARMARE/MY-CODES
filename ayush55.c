main()
{
    int prono,qty;
    long int amt;
    printf("1.Hard Disk Rs2800\n2.Monitor Rs5000\n3.DVD Drive Rs1200\n4.Mouse Rs600\n5.Keyboard Rs1000");
    printf("Enter the product number and quantity");
    scanf("%d %d",&prono,&qty);
    switch(prono)
    {
        case 1:
               amt=(long int)qty*2800;
               printf("Amt of Hard Disk=%ld",amt);
               break;
        case 2:
               amt=(long int)qty*5000;
               printf("Amt for Monitor = %ld",amt);
               break;
        case 3:
               amt=(long int)qty*1200;
               printf("Amt for DVD Drive = %ld",amt);
               break;
        case 4:
               amt=(long int)qty*600;
               printf("Amt for Mouse = %ld",amt);
               break;
        case 5:
               amt=(long int)qty*1000;
               printf("Amt for Keyboard = %ld",amt);
               break;
        default:
                printf("Invalid product number");
    }
    getch();
}