// print array
#include<iostream>
using namespace std;
const int size = 5;

class Array
{
    int arr[size];
    public:
        void getdata();
        void setdata();
};

    void Array::getdata()
    {
        cout<<"enter array :";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }

    void Array::setdata()
    {
        cout<<"entered array :";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

int main()
{
    Array a1;
    a1.getdata();
    a1.setdata();

    return 0;
}