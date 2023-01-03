#include<iostream>
using namespace std;

void print_this(int *ptr)
{
    cout<<"value in pointer :"<<*ptr<<endl;
}

void update(int *ptr)
{
    *ptr = *ptr+1;
    cout<<"updated value :"<<*ptr<<endl;
}
int main()
{
    int value = 10;
    int *ptr = &value;

    print_this(ptr);

    update(ptr);
    cout<<"updated value :"<<*ptr<<endl;
    return 0;
}
