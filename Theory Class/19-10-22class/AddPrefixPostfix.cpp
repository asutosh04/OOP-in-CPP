/*iii.Overload the ++ (prefix and postfix) operator for the class.*/

#include <iostream>

using namespace std;
class count{
    int value;
    public:
    count(){
        value=5;
    }
    void operator ++(){//PREFIX
        ++value;
    }
    void operator ++(int){//POSTFIX
        value++;
    }
    void display(){
        cout<<value<<endl;
    }
};
int main()
{
    count c;

    ++c;
    cout<<"\nAfter the prefix addition\n";
    c.display();

    c++;
    cout<<"\nAfter the postfix addition\n";
    c.display();
    
    return 0;
}