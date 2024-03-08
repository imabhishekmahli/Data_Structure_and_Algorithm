#include<iostream>
using namespace std;

void mark(int n)
{
    if(n>90){
        cout<<"excellent";
    }else if(n>80){
        cout<<"very good";
    }else if(n>70){
        cout<<"good";
    }else{
        cout<<"work hard";
    }
}

int main()
{
    int marks;
    cout<<"enter marks :";
    cin>>marks;
    
    mark(marks);
    return 0;
}