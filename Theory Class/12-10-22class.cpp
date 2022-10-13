#include<iostream>
#include<algorithm>
using namespace std;

class Parent
{
    public:
        Parent(int x)
        {
            cout<<"Inside base class"<<endl;
        }
};

class Derived:public Parent{
    public:
        Derived(int x):Parent(x)
        {
            cout<<"Inside derived class"<<endl;
        }
};

int main()
{
    Derived d(10);
    return 0;
}