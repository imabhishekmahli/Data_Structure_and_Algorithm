// check if person is eligible to cast his/her vote or not

#include<iostream>
using namespace std;

class Vote
{
    public:
        int age;

    void adult()
    {
        if (age >= 18)
            cout<<"Adult";
        else
            cout<<"child";
    }
};

int main()
{
    Vote p1;

    cout<<"enter your age :";
    cin>>p1.age;

    p1.adult();
    return 0;
}