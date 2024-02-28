#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter row :";
    cin>>row;
    cout<<"col :";
    cin>>col;

    for(int i=0;i<row;i++){
        if(i==0||i==row-1){
            for(int j=0;j<col;j++){
                cout<<"* ";
            }
        }
        else{
            // for(int i=0;i<1;i++){
            //     cout<<"*";
            // }
            cout<<"* ";
            for(int a=0;a<col-2;a++){
                cout<<"  ";
            }
            cout<<"* ";
            // for(int i=row-1;i<row;i++){
            //     cout<<"*";
            // }
        }
        cout<<endl;
    }
    return 0;
}