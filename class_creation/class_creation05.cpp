// check greate between two numbers
#include<iostream>
using namespace std;

class Greater
{
    public:
        int a;
        int b;

    void twonum()
    {
        if (a>b)
            cout<<a<<" is greater";
        else
            cout<<b<<" is greater";
    }
};

int main()
{
    Greater g1;

    cout<<"enter a :";
    cin>>g1.a;
    cout<<"enter b :";
    cin>>g1.b;

    g1.twonum();
    return 0;
}