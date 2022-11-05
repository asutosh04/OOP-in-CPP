/*Overload the unary minus operator using friend function and member function*/

#include <iostream>
using namespace std;

class Number
{
public:
    int x, y, z;

    Number() {}
    Number(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

/*
    void operator-() // member function
    {
        x = -x;
        y = -y;
        z = -z;
    }
*/

    friend void operator-(Number &n);

    void display()
    {
        cout << "X:" << x << endl
            << "Y:" << y << endl
            << "Z:" << z << endl;
    }
};

void operator-(Number &n) // friend function
{
    n.x = -n.x;
    n.y = -n.y;
    n.z = -n.z;
}
int main()
{
    cout << "\nBefore negative operator:\n";
    Number n1(4, -5, 6);
    n1.display();
    cout << endl;
    cout << "\nAfter negative operator:\n";
    -n1;
    n1.display();
}