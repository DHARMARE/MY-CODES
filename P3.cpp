#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
    private:
            char name[20];
            int age;
            float bs;
    public:
           void read()
           {
               cout<<"Enter the name,age,bs";
               cin>>name>>age>>bs;
           }
           void write()
           {
               cout<<name<<" "<<age<<" "<<bs<<"\n";
           }
};
 int main()
{
    emp e1,e2;
    e1.read();
    e2.read();
    e1.write();
    e2.write();
    return 0;
}