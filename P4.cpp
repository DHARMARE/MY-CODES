#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
            int rno;
            char name[20];
            int m1,m2,m3;
    public:
           void read()
           {
              cout<<"Enter the roll no,name,m1,m2,m3";
              cin>>rno>>name>>m1>>m2>>m3;
           }
           void write()
           {
               cout<<"Roll No:"<<rno<<"\n";
               cout<<"Name:"<<name<<"\n";
               cout<<"Marks:"<<m1<<""<<m2<<""<<m3<<"\n";
           }
};
main()
{
    student s1,s2;
    s1.read();
    s2.read();
    s1.write();
    s2.write();
    getch();
}
