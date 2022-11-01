#include <iostream>
using namespace std;

class complex
{
    private:
    int real;
    int img;
    public:
    friend istream& operator>>(istream &o,complex &c);
    friend ostream& operator<<(ostream &o,complex &c);
};

istream& operator>>(istream &o,complex &c){
    cout<<"Enter the real part:";
    o>>c.real;
    cout<<"Enter the img part:";
    o>>c.img;    
    return o;
}

ostream& operator<<(ostream &o,complex &c){
    o<<"The complex number is : ";
    o<<c.real<<" + i"<<c.img;
    return o;
}


int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}