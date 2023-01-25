#include<iostream>
using namespace std;

int main()
{
    int a = 100;
    int *aptr = &a;

    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr;

    return 0;
}