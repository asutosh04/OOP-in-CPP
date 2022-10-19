/*i. WAP to overload following operators for class distance, which stores the distance in feet
and inches.
b) Unary -*/

#include<iostream>
#include<algorithm>
using namespace std;

class DIST
{
    private:
    int feet;
    int inches;

    public:
    void input()
    {
        cout<<"Enter the distance in feet and inches : ";
        cin>>feet>>inches;
    }

    void operator -- () //prefix
    {
        --feet;
        --inches;
    }

    void operator -- (int) //postfix
    {
        feet--;
        inches--;
    }    

    void display(){
        cout<<"Total Feet = "<<feet<<endl;
        cout<<"Total Inches = "<<inches<<endl;
    }
};

int main()
{
    DIST d1,d2;

    cout<<"\nDistance 1 using Unary - (prefix) operator\n";
    d1.input();
    --d1;
    d1.display();

    cout<<"\nDistance 2 using Unary - (postfix) operator\n";
    d2.input();
    d2--;
    d2.display();

}