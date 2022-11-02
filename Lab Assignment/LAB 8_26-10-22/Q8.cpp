/*Overload the 4 arithmetic operators in Class Binary that has float data member*/

#include <iostream>
using namespace std;

class Number
{
private:
    float data;

public:
    Number(float num)
    {
        data = num;
    }
    void operator+(int x)
    {
        data = data + x;
    }
    void operator-(int x)
    {
        data = data - x;
    }
    void operator*(int x)
    {
        data = data * x;
    }
    void operator/(float x)
    {
        data = data / x;
    }
    void display()
    {
        cout << "\nNumber is:" << data << endl;
    }
};

int main()
{
    Number n(69.480);
    cout << "\nAddition:\n";
    n + 23;
    n.display();
    cout << "\nSubtraction:\n";
    n - 23;
    n.display();
    cout << "\nMultiplication:\n";
    n * 2;
    n.display();
    cout << "\nDivision:\n";
    n / 2;
    n.display();
}