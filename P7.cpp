#include"iostream"
#include"conio.h"
using namespace std;
class string
{
    private:
            char str[50];
    public:
            void read()
            {
                cout<<"Enter the string";
                cin>>str;
            }
            void write()
            {
                cout<<"String:"<<str<<"\n";
            }
};
int main()
{
    string s1,s2;
    s1.read();
    s2.read();
    s1.write();
    s2.write();
    getch();
}