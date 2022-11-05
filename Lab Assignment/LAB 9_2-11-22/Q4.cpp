/*Overload the logical not operator using member function and friend function*/

#include <iostream>
using namespace std;
class Truth
{
private:
    bool value;

public:
    Truth(bool val){
        value = val;
    }
    bool operator!()
    {
        cout << "Not Operator '!' " << endl;
        return !value;
    }
};

int main()
{
    Truth t(true);

    if (!t)
        cout << "t is false" << endl;
    else
        cout << "t is true" << endl;
    return 0;
}