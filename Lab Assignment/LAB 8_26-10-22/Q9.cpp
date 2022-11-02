/*Overload the 4 arithmetic operators and == to compare two fraction objects*/

#include <iostream>
using namespace std;

class Fraction
{
private:
    int num;
    int den;

public:
    Fraction(int n, int d)
    {
        num = n;
        den = d;
    }
    int operator==(Fraction f)
    {
        if (num == f.num && den == f.den)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Fraction f1(2, 4);
    Fraction f2(2, 5);
    if (f1 == f2)
    {
        cout << "Same fraction";
    }
    else
    {
        cout << "Different fraction";
    }
}