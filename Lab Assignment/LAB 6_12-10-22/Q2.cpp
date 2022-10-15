/*ii. WAP to demonstrate the order of call of constructors and destructors in case of multi-
level inheritance.*/

#include<iostream>
#include<algorithm>
using namespace std;

class Ancestor
{
    public:
    Ancestor()
    {
        cout<<"Ancestor Class Constructor is called."<<endl;
    }

    ~Ancestor()
    {
        cout<<"Ancestor Class Destructor is called."<<endl;
    }
};

class Parent:public Ancestor
{
    public:
    Parent()
    {
        cout<<"Parent Class Constructor is called."<<endl;
    }

    ~Parent()
    {
        cout<<"Parent Class Destructor is called."<<endl;
    }
};

class Child:public Parent
{
    public:
    Child()
    {
        cout<<"Child Class Constructor is called."<<endl;
    }

    ~Child()
    {
        cout<<"Child Class Destructor is called."<<endl;
    }    
};


int main()
{
    Child ch;
    return 0;
}