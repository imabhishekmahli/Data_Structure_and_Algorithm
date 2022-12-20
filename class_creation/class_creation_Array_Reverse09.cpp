// reverse an ARRAY

#include<iostream>
using namespace std;
const int size = 5;

class Reverse
{
    int arr[size];
    public:
        void getdata();
        void setdata();
};

void Reverse::getdata()
{
    cout<<"enter array :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void Reverse::setdata()
{
    cout<<"reverse array :";
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    Reverse r1;
    r1.getdata();
    r1.setdata();

    return 0;
}