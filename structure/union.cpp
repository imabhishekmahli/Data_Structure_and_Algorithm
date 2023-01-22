#include<iostream>
using namespace std;

union money
{
    int note;
    float curr;
};

int main()
{
    union money m1;
    m1.note = 2000;
    m1.curr = 80.69;

    cout<<"note :"<<m1.curr<<endl;

    return 0;
}