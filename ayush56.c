main()
{
       long int num,sum=0,d;
       printf("Enter the number");
       scanf("%d",&num);
       while(num!=0)
       {
              d=num%10;
              sum=sum*10+d;
              num=num/10;
       }
       while(sum!=0)
       {
              d=sum%10;
              switch(d)
              {
                     case 0:
                            printf("Zero");
                            break;
                     case 1:
                            printf("One");
                            break;
                     case 2:
                            printf("Two");
                            break;
                     case 3:
                            printf("Three");
                            break;
                     case 4:
                            printf("Four");
                            break;
                     case 5:
                            printf("Five");
                            break;
                     case 6:
                            printf("Six");
                            break;
                     case 7:
                            printf("Seven");
                            break;
                     case 8:
                            printf("Eight");
                            break;
                     case 9:
                            printf("Nine");
                            break;
              }
              sum=sum/10;
       }
       getch();
}