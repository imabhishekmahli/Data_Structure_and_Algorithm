#include<iostream>
using namespace std;

int add(int m, int n)
{
    int result=m+n;
    return result;
}

int main()
{
    int a;
    cout<<"enter a :";
    cin>>a;

    int b;
    cout<<"enter b :";
    cin>>b;

    int sum = add(a,b);
    cout<<"sum is :"<<sum;

    return 0;
}