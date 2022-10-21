#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"enter array size :";
    cin>>n;

    for (int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }

    cout<<"entered array :";
    for (int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}