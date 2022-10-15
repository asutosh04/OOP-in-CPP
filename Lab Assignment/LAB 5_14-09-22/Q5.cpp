#include <iostream>
using namespace std;

class reverse
{
private:
    int num;

public:
    reverse()
    {
        int n;
        cout<<"Enter the number : ";
        cin>>n;
        num = n;
    }
    friend void rev(reverse r);
};
void rev(reverse r)
{
    int sum=0,rem;
    cout<<"Reverse is : ";
    while (r.num != 0)
    {
        rem = r.num % 10;
        sum = sum * 10 + rem;
        r.num/=10;
    }
    cout << sum;
}
int main()
{
    reverse r;
    rev(r);
}