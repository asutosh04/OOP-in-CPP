#include <iostream>
using namespace std;
//class number1;
class number2;
class number1
{
private:
    int num1;

public:
    number1()
    {
        int n1;
        cout<<"Enter the number of class 1 : ";
        cin>>n1;
        num1 = n1;
    }
    int get_num1()
    {
        return num1;
    }
    friend void swap(number1 s1, number2 s2);
};
class number2
{
private:
    int num2;

public:
    number2()
    {
        int n2;
        cout<<"Enter the number of class 2 : ";
        cin>>n2;
        num2 = n2;
    }
    int get_num2()
    {
        return num2;
    }
    friend void swap(number1 s1, number2 s2);
};
void swap(number1 s1, number2 s2)
{
    int temp = s1.num1;
    s1.num1 = s2.num2;
    s2.num2 = temp;
    cout << "\nAfter Swapping : ";
    cout <<s1.num1 << " "<<s2.num2 << endl;
}
int main()
{
    number1 n1;
    number2 n2;
    cout << "\nBefore Swap : ";
    cout <<n1.get_num1() << " "<< n2.get_num2() << endl;
    swap(n1, n2);
}
