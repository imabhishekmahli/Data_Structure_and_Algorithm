#include<iostream>
using namespace std;

class OddEven
{
    public:
        int num;

    void evenodd()
    {
        if (num % 2 ==0)
        {
            cout<<"even";
        }
        else
            cout<<"odd";
    }
};

int main()
{
    OddEven oe;

    cout<<"enter num :";
    cin>>oe.num;

    oe.evenodd();
    return 0;
}