// greater between 3 numbers

#include<iostream>
using namespace std;

class Greatest
{
    public:
        int a;
        int b;
        int c;
    
    void go3()
    {
        if (a>b && a>c)
        {
            cout<<a<<" is greater";
        }
        else if(b>a && b>c)
        {
            cout<<b<<" is greater";
        }
        else
        {
            cout<<c<<" is greater";
        }
    }
};

int main()
{
    Greatest g1;
    cout<<"enter a :";
    cin>>g1.a;
    cout<<"enter b :";
    cin>>g1.b;
    cout<<"enter c :";
    cin>>g1.c;

    g1.go3();
    return 0;
}