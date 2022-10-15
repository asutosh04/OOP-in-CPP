#include <iostream>
using namespace std;
class inchfeet;
class centmet
{
private:
    int cm;
    int m;

public:
    void getData()
    {
        cout << "Enter the value of m : ";
        cin >> m;
        cout << "Enter the value of cm : ";
        cin >> cm;
        cout << endl;
    }
    friend void compare(centmet x, inchfeet y);
};
class inchfeet
{
private:
    int in;
    int ft;

public:
    void getData()
    {
        cout << "Enter the value of ft : ";
        cin >> ft;
        cout << "Enter the value of in : ";
        cin >> in;
        cout << endl;
    }
    friend void compare(centmet x, inchfeet y);
};
void compare(centmet x, inchfeet y)
{
    if ((y.ft * 0.3048) < x.m){
        if((y.in*2.54<x.cm))
        {
            cout << "Distance in meters and centimers is larger\n";
        }
        else
        {
            cout << "Distance in inches and feet is larger\n";
        }
    }
    else
    {
        cout << "Distance in inches and feet is larger\n";
    }
}
int main()
{
    centmet x;
    x.getData();

    inchfeet y;
    y.getData();

    compare(x, y);
}