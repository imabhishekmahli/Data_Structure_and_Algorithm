#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num;

    cout<<"value is :"<<*ptr<<endl;
    cout<<"address is :"<<ptr<<endl;

    cout<<"size of num :"<<sizeof(num)<<endl;
    cout<<"size of pointer :"<<sizeof(ptr)<<endl;

    double d1 = 5.21345;
    double *p1 = &d1;

    cout<<sizeof(d1)<<endl;
    cout<<sizeof(p1)<<endl;
    
    return 0;
}