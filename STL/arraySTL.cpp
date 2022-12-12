#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int,5> a = {10,20,30,40,50};

    int size = a.size();
    for (int i=0;i<size;i++)
    {
        cout<<a[i]<<" "<<endl;
    }

    cout<<"array at 2nd index :"<<a.at(1)<<endl;
    cout<<"array at 3rd index :"<<a.at(2)<<endl;

    /*fetching first and last element*/
    cout<<"first element :"<<a.front()<<endl;
    cout<<"last element :"<<a.back()<<endl;
    return 0;
}