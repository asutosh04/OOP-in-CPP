/*iii. WAP to demonstrate the order of call of constructors and destructors in case of virtual
base class .*/

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

class Father:virtual public Ancestor
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

class Mother:virtual public Ancestor
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