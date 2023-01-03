#include<iostream>
using namespace std;

int main()
{
    int a[10];

    cout<<"address of array :"<<a<<endl;
    cout<<"address of array :"<<&a[0]<<endl;
    cout<<"value of array at 0 position :"<<a[0]<<endl;

    cout<<"size :"<<sizeof(a)<<endl;

    int *ptr = &a[5];
    cout<<"size :"<<sizeof(ptr)<<endl;

    return 0;
}