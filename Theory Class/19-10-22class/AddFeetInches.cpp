/*i. WAP to overload following operators for class distance, which stores the distance in feet
and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the
inches value ( D2=4+D1)*/

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

    DIST operator + (DIST &obj){
        DIST temp;
        temp.feet=feet+obj.feet;
        temp.inches=inches+obj.inches;
        return temp;
    }

    DIST operator + (int x){
        DIST temp;
        temp.feet=feet;
        temp.inches=inches+x;
        return temp;        
    }

    void display(){
        cout<<"Total Feet = "<<feet<<endl;
        cout<<"Total Inches = "<<inches<<endl;
    }
};

int main()
{
    DIST d1;
    cout<<"\nDistance 1\n";
    d1.input();

    DIST d2;
    cout<<"\nDistance 2\n";
    d2.input();

    DIST d3;
    d3=d1+d2;
    cout<<"\nDistance 1 + Distance 2\n";
    d3.display();

    DIST d4;
    cout<<"\nDistance 1 + 4\n";
    d4=d1+4;
    d4.display();
    return 0;
}