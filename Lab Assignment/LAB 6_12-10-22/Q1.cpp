/*i. WAP to demonstrate the order of call of constructors and destructors in case of multiple
inheritance.*/

#include<iostream>
#include<algorithm>
using namespace std;

class Father
{
    public:
    Father()
    {
        cout<<"Father Class Constructor is called."<<endl;
    }

    ~Father()
    {
        cout<<"Father Class Destructor is called."<<endl;
    }

};

class Mother
{
    public:
    Mother()
    {
        cout<<"Mother Class Constructor is called."<<endl;
    }

    ~Mother()
    {
        cout<<"Mother Class Destructor is called."<<endl;
    }
};

class Child:public Father,public Mother
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