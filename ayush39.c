main()
{
    int num,digit,d,count=0;
    printf("Enter the number and the digit");
    scanf("%d %d",&num,&digit);
    while(num!=0)
    {
      d=num%10;
      if(d==digit)
      {
          count=count+1;
      }
      num=num/10;
    }  
    printf("%d occurs %d times in the given number",digit,count);
    getch();
}