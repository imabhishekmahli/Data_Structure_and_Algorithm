#include<iostream>
using namespace std;

void great(int m, int n, int o)
{
    if(m>n){
        cout<<m<<" is greater";
    }else if(n>o){
        cout<<n<<" is greater";
    }else{
        cout<<o<<" is greater";
    }
}

int main()
{
    int a,b,c;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"enter c :";
    cin>>c;

    great(a,b,c);

    return 0;
}