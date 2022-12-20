// check if alphabate , number or special character

#include<iostream>
#include<string>
using namespace std;

class ANS
{
    public:
        char ch;

    void check()
    {
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
            cout<<"Alphabate";
        else if(ch>=0 && ch<=9)
            cout<<"Number";
        else
            cout<<"special character";
    }
};

int main()
{
    ANS a1;
    cout<<"enter :";
    cin>>a1.ch;

    a1.check();
    return 0;
}