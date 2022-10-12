//1.WAP to add two numbers

#include <iostream>
using namespace std;

int sum(int x, int y){
    return (x+y);
}

int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    int addition=sum(a,b);
    cout<<"Sum of two Numbers is : "<<addition;
    return 0;
}