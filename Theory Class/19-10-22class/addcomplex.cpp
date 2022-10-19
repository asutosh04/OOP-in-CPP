/*iii. Create a class which a complex number. Add two objects and display the resultant object.*/

#include<iostream>
#include<algorithm>
using namespace std;

class COMPLEX
{
    int real;
    int img;

    public:

    void input(){
        cout<<"Enter the real and imaginary part : ";
        cin>>real>>img;
    }

    COMPLEX operator+(COMPLEX &c){
        COMPLEX temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    void display(){
        cout<<real<<" "<<img<<endl;
    }
};

int main()
{
    COMPLEX c1,c2,c3;
    cout<<"\nComplex 1\n";
    c1.input();
    cout<<"\nComplex 2\n";
    c2.input();
    c3=c1+c2;
    cout<<"\nAfter Addition\n";
    c3.display();
    return 0;
}
