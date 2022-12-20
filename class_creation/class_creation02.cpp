#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        string address;

    void studentdetails()
    {
        cout<<"my name is "<<name<<" roll no. is :"<<roll<<" address is "<<address;

    }
};

int main()
{
    Student s1;

    s1.name = "Abhishek Kumar";
    s1.roll = 01;
    s1.address = "harina colony";

    s1.studentdetails();
    return 0;
}