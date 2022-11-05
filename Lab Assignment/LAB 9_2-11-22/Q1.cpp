/*To add and subtract two complex numbers using binary operator overloading*/

#include<iostream>

using namespace std;

class COMPLEX
{
    int real;
    int img;

    public:

    void input(){
        cout<<"Enter the real part : ";
        cin>>real;
        cout<<"Enter the imaginary part : ";
        cin>>img;
    }

    COMPLEX operator+(COMPLEX &c){
        COMPLEX temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    COMPLEX operator-(COMPLEX &c){
        COMPLEX temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }

    void display(){
        cout<<real<<" + ("<<img<<"i"<<")"<<endl;
    }
};

int main()
{
    COMPLEX c1,c2,c3,c4;
    cout<<"\nComplex 1\n";
    c1.input();
    cout<<"\nComplex 2\n";
    c2.input();
    c3=c1+c2;
    cout<<"\nAfter Addition\n";
    c3.display();
    c4=c1-c2;
    cout<<"\nAfter Subtraction\n";
    c4.display();
    return 0;
}