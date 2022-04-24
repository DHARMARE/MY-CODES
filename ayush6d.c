main()
{
    int bytes,bits;
    float kb,mb,gb;
    printf("Enter the number of bytes");
    scanf("%d",&bytes);
    bits = bytes*8;
    kb = bytes/1024;
    mb = kb/1024;
    gb = mb/1024;
    printf("Bits = %d kilobytes = %f megabytes = %f gigabytes = %f ",bits,kb,mb,gb);
    getch();
}