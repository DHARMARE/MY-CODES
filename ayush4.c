main()
{
    float im,ip,fm,fp,avg;
    printf("Enter the initial meter and petrol readings");
    scanf("%f %f",&im,&ip);
    printf("Enter the final meter and petrol readings");
    scanf("%f %f",&fm,&fp);
    avg = fm - im / ip - fp;
    printf("Average = %f",avg);
    getch();
}