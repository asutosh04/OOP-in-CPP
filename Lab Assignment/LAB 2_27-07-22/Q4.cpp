//4.WAP to swap two numbers(call by value ,call by reference and call b y address)

#include <iostream>
using namespace std;
void swp(int a, int b) //for call by value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter Swapping : " << a << " " << b << "\n" << endl;
}
void swap (int &num1, int &num2) //for call by Reference
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
void sp(int *Xx,int *Yy)  //for call by address
{
        int Zz;
        Zz=*Xx;
        *Xx=*Yy;
        *Yy=Zz;
        cout<<"\nInside Function After Swapping : "<<*Xx<<" "<<*Yy<<"\n";
}
int main()
{
    cout << "Call by value\n";
    cout << "-------------------------------------------------------------------------\n";
    int a, b;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    swp(a, b);

    cout << "Call by reference\n";
    cout << "-------------------------------------------------------------------------\n";
    int c,d;
    cout << "Enter 2 numbers : ";
    cin >> c >> d;
    swap(c,d);
    cout<<"\n After swapping :"<<" "<< c <<" "<< d << "\n" <<endl;

    cout << "Call by address\n";
    cout << "-------------------------------------------------------------------------\n";
    int x,y;
    cout << "Enter 2 numbers : ";
    cin >> x >> y;
    sp(&x,&y);
    cout<<"\nOutside Function After Swapping : "<<x<<" "<<y<<"\n";

    return 0;
}





