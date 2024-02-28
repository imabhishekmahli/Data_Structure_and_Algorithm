#include<iostream>
using namespace std;

int  main()
{
    int n;
    cout<<"Enter n to print the pattern :";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        for(int i=0;i<5;i++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}