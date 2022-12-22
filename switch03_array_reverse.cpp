#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    int choose;
    cout<<"enter n :";
    cin>>n;

    cout<<"enter your choice :"<<endl;
    cout<<"1. print the array."<<endl;
    cout<<"2. reverse the array"<<endl;
    cin>>choose;

    switch(choose)
    {
        case 1:
        //array
        cout<<"enter array :";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"entered array :";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        break;
        case 2:
        //reverse array
        cout<<"enter array :";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"reverse array :";
        for(int i=n-1;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
        break;

        default:
        cout<<"INVALID";
    }

    return 0;
}