#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    int sum=0;
    cout<<"enter array size :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for (int i=0;i<n;i++)
    {
        sum = a[i] + sum;

    }
    cout<<"sum of array :"<<sum;
    return 0;
}