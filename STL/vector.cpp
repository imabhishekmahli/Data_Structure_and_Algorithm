/*
when ever the array gets full,
its capacity get double and it dumped the previous elements.
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;

    vector<int> v(5,2);
    cout<<"element in v :"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"\ncapacity->"<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"capacity->"<<a.capacity()<<endl;

    a.push_back(20);
    cout<<"capacity->"<<a.capacity()<<endl;

    a.push_back(40);
    cout<<"capacity->"<<a.capacity()<<endl;

    a.push_back(50);
    cout<<"capacity->"<<a.capacity()<<endl;

    a.push_back(44);
    cout<<"capacity->"<<a.capacity()<<endl;
    cout<<"size->"<<a.size()<<endl;  /*how many elements*/

    cout<<"front element :"<<a.front()<<endl;
    cout<<"back element :"<<a.back()<<endl;

    a.pop_back();
    cout<<"after pop"<<endl;
    for (int i:a)
    {
        cout<<i<<" ";
    }
}