main()
{
    long int num,sum=0,i=1,fact=1,a,b,c,d,e,max,f1=0,f2=1,f3=1,n,num1,num2;
    printf("1.Even or odd\n2.Factorial\n3.Largest of 5 number\n4.Febonacci series\n5.Sum of digits\n6.Exit");
    printf("Enter the number");
    scanf("%d",&num);
    switch(num)
    {
        case1:
              if(num%2==0)
              {
                  printf("Number is even");
              }
              else
              {
                  printf("Number is odd");
              }
              break;
        case2:
              while(i<=num)
              {
                  fact=fact*i;
                  i=i+1;
              }      
              printf("Factorial= %d",fact);
              break;
        case3:
              printf("Enter 5 numbers");
              scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
              max=a;
              if(b>max)
              {
                  max=b;
              }
              if(c>max);
              {
                  max=c;
              }
              if(d>max)
              {
                  max=d;
              }
              if(e>max)
              {
                  max=e;
              }printf("Largest=%d",max);
              break;
        case4:
              prinf("Enter the number of terms required");
              scanf("%d",&n);
              if(n==1)
              {
                  printf("%d",f1);
              }
              if(n==2)
              {
                  printf("%d %d",f1,f2);
              }
              if(n>2)
              {
                  printf("%d %d",f1,f2);
                  while(i<=n)
                  {
                      f3=f1+f2;
                      printf("%d",f3);
                      f1=f2;
                      f2=f3;
                      i=i+1;
                  }
              }
              break;
        case5:
              printf("Enter the two numbers");
              scanf("%d %d",&num1,&num2);
              sum=num1+num2;
              printf("Summation=%d",sum);
              break;
        case6:
              exit();
              break;
        default:
               printf("Invalid number");        
           
    }
    getch();
}