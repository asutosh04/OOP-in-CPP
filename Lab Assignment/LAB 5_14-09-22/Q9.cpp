#include <iostream>
using namespace std;
class shape
{
public:
    shape()
    {
        cout << "\n\nInput the following parameters to find area";
    }
};
class circle : public shape
{
    float r;

public:
    void area()
    {
        cout << "\nEnter radius : ";
        cin >> r;
        cout << "Area of circle : " << (3.14 * r * r);
    }
};
class rectangle : public shape
{
    int l, b;

public:
    void area()
    {
        cout << "\nEnter length : ";
        cin >> l;
        cout << "Enter breadth : ";
        cin >> b;
        cout << "Area of rectangle : " << l * b;
    }
};
class triangle : public shape
{

    int h, b;
    float a;

public:
    void area()
    {
        cout << "\nEnter height : ";
        cin >> h;
        cout << "Enter base : ";
        cin >> b;
        a = 0.5 * h * b;
        cout << "Area of triangle : " << a;
    }
};
int main()
{
    circle c; 
    c.area();
    rectangle r; 
    r.area();
    triangle t; 
    t.area();
    return 0;
}