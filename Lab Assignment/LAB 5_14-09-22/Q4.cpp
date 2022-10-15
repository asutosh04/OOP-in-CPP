#include <iostream>
#include <cmath>
using namespace std;

class number{
    private:
    int n;
    public:
    number(){
        cout<<"Enter the number : ";
        cin>>n;
    }

    friend int cube(number n1);

    void display(number n1){
        cout<<"The Cube of numbers upto "<<n<<" is : ";
        for(int i=1;i<=n;i++){
            cout<<pow(i,3);
            cout<<" ";
        }
    }
};

int cube(number n1){
    int num=n1.n;
    int c=pow(num,3);
    return c;
}

int main(){
    number n1;
    n1.display(n1);
}
