/*i. Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area
of each shape and display it, using virtual function.*/

#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area(){
        cout<<"\nThis is a virtual function\n";
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
    shape *s;

    circle c;
    s=&c; 
    s->area();

    rectangle r;
    s=&r; 
    s->area(); 

    triangle t;
    s=&t; 
    s->area();  

    return 0;

}