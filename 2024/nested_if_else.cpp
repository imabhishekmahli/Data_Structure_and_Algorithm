#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter your marks :";
    cin>>marks;

    // if(marks>=90){
    //     cout<<"excellent";
    // }
    // else{
    //     if(marks>=80){
    //         cout<<"very good";
    //     }
    //     else{
    //         if(marks>=70){
    //             cout<<"very good";
    //         }
    //         else{
    //             if(marks>=60){
    //                 cout<<"good";
    //             }
    //         }
    //     }
    // }

    if(marks>=90){
        cout<<"A";
    }
    else if(marks>=80)
    {
        cout<<"B";
    }
    else if(marks>=70)
    {
        cout<<"C";
    }
    else{
        cout<<"not valid";
    }


    return 0;
}