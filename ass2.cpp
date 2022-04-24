#include<iostream>
#include<conio.h>
using namespace std;
class comp
{
    private:
            float real,img;
    public:
           void read()
           {
               cout<<"Enter the real and imaginary part of comp no.1";
               cin>>real>>img;
               cout<<"Enter the real and imaginary part of comp no.2";
               cin>>real>>img;
           }
           void write()
           {
               cout<<real<<" "<<img<<"\n";
           }
};
int main()
{
    comp c1,c2,c3;
    c1.read();
    c2.read();
    c1.write();
    c2.write();
    return 0;
}