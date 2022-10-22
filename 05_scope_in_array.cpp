#include<iostream>
using namespace std;

void update(int a[] , int n)
{
    cout<<"inside the funciton"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;


    cout<<"going back to main funciton"<<endl;
}


int main()
{
    int a[3] = {5,6,8};

    update(a , 3);
    
    for (int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
    
}