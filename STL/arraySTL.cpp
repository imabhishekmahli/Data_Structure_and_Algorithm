#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int,5> a = {10,20,30,40,50};

    int size = a.size();
    for (int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}