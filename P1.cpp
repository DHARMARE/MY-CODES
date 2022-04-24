#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a=10,b=20;
    void fn(int &,int &);
    fn(a,b);
    cout<<"A="<<a<<"B="<<b<<"\n";
    getch();
}
void fn(int &x,int &y)
{
    x=x+100;
    y=y+100;
}