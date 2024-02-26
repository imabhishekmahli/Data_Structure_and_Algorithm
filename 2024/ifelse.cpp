#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter you age";
    cin>>age;

    if (age>=18){
        cout<<"valid to vote";
    }
    else{
        cout<<"not valid to vote";
    }
    
    return 0;
}