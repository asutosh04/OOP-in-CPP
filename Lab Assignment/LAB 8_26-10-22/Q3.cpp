/*TO make complex number class and overload + operator using friend function*/

#include <iostream>

using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }
    friend Complex operator+(Complex c1, Complex c2); // friend funtion

    int getReal()
    {
        return real;
    }
    int getImaginary()
    {
        return imaginary;
    }
};
int main()
{
    cout << "\t\tComplex Number Calculator:" << endl;
    cout << "\t\t--------------------------" << endl;
    int real, img;
    cout << "Enter the real and imaginary part of the first Complex number(a+bi):";
    cin >> real >> img;
    Complex c1(real, img);
    cout << "Enter the real and imaginary part of the second Complex number(c+di):";
    cin >> real >> img;
    Complex c2(real, img);
    Complex c3;
    cout << "Sum of both the complex number results in:";
    c3 = c1 + c2;
    cout << c3.getReal() << "+" << c3.getImaginary() << "i" <<endl;

    return 0;
}
Complex operator+(Complex c1, Complex c2) // friend fun declaration no need of ::
{
    Complex t;
    t.real = c1.real + c2.real;
    t.imaginary = c1.imaginary + c2.imaginary;
    return t;
}