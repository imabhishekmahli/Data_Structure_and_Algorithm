#include<iostream>
#include<string>
using namespace std;

typedef struct student
{
    /* data */
    int roll;
    string name;
    float percentage;
}st;

int main()
{
    st abhi;
    abhi.name = "Abhishek Kumar";
    abhi.roll = 01;
    abhi.percentage = 83.4;

    cout<<"name :"<<abhi.name<<endl<<"roll :"<<abhi.roll<<endl<<"percentage :"<<abhi.percentage;

    return 0;
}