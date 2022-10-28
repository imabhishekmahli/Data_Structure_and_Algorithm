#include<iostream>
using namespace std;

bool search(int arr[] , int n , int key)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10],m;
    cout<<"enter the size of array :";
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int key;

    cout<<"enter the value you want to search :";
    cin>>key;

    bool found = search (arr , 10 , key);

    if (found)
    {
        cout<<"key found.";
    }
    else{
        cout<<"not found.";
    }

    return 0;
}