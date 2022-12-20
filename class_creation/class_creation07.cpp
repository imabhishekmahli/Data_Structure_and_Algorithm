// check if vowel or constant
#include<iostream>
#include<string>
using namespace std;

class Vowel
{
    public:
        char ch;

    void vowelcons()
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout<<"Vowel";
        else
            cout<<"Constant";
    }
};

int main()
{
    Vowel v1;
    cout<<"enter a char :";
    cin>>v1.ch;

    v1.vowelcons();
    return 0;
}