/*3. Write a program to print the area and perimeter of a triangle having 
sides of 3, 4 and 5 units by creating a class named 'Triangle' with a 
function to print the area and perimeter.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Triangle
{
private:
    int A,B,C;

public:
    void getData(int side1, int side2, int side3)
    {
        A = side1;
        B = side2;
        C = side3;
    }
    void calc()
    {
        float s = (A + B + C) / 2;
        float area = sqrt(s * (s - A) * (s - B) * (s - C));
        cout << "Area of triangle is : " << setprecision(3) << area << endl;
        int permtr = A + B + C;
        cout << "Perimeter of triangle is : " << permtr << endl;
    }
};
int main()
{
    Triangle T1;
    T1.getData(3, 4, 5);
    T1.calc();
    return 0;
}