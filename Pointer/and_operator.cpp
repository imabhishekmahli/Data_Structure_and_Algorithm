#include<iostream>
using namespace std;

int main()
{
    int a[5] = {2,6,8,10,12};

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;

    int *ptr = &ptr[0];

    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr[0]<<endl;

    return 0;
}