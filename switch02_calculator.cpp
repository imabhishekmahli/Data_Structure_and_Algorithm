#include<iostream>
using namespace std;

int main()
{

    int a;
    cout<<"enter a :";
    cin>>a;

    int b;
    cout<<"enter b :";
    cin>>b;

    int n;
    cout<<"enter option :";
    cin>>n;

    switch(n)
    {
        case 1:
        //addition
        cout<<a+b;
        break;

        case 2:
        //subtraction
        cout<<a-b;
        break;

        case 3:
        //multiplication
        cout<<a*b;
        break;

        case 4:
        //division
        cout<<a/b;
        break;

        default:
        cout<<"INVALID";
        break;
    }


    return 0;
}