#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
        string name;
        int age;

    void introduce()
    {
        cout<<"my name is "<<name<<" and im "<<age<<" years old.";
    }
};

int main()
{
    Person personobject;

    personobject.name = "abhihek kumar";
    personobject.age = 25;

    personobject.introduce();
    return 0;
}