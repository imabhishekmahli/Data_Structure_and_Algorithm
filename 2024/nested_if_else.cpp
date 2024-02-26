#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter your marks :";
    cin>>marks;

    if(marks>=90){
        cout<<"excellent";
    }
    else{
        if(marks>=80){
            cout<<"very good";
        }
        else{
            if(marks>=70){
                cout<<"very good";
            }
            else{
                if(marks>=60){
                    cout<<"good";
                }
            }
        }
    }
}