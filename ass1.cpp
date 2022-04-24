#include<iostream>
#include<conio.h>
using namespace std;
class measure
{
    private:
            int feet;
            int inches;
    public:
           void read()
           {
               cout<<"Enter the height in feet and inches";
               cin>>feet>>inches;
           }
           void write()
           {
               cout<<feet<<" "<<inches<<"\n";
           }
};
int main()
{
    measure h1,h2;
    h1.read();
    h2.read();
    h1.write();
    h2.write();
    return 0;
}