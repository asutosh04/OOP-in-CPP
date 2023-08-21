/*WAP to find sort an integer array and a float array, 
using class template..*/

#include<iostream>
using namespace std;

template<typename T>
class Sort
{
    T a[5];
    public:
    Sort()
    {
        cout<<"Enter 5 elements: ";
        for(int i=0; i<5; i++)
            cin>>a[i];
    }
    void sort()
    {
        T temp;
        for(int i=0; i<5; i++)
        {
            for(int j=i+1; j<5; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }
    void display()
    {
        cout<<"Sorted array is: ";
        for(int i=0; i<5; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
};

int main(){

    cout<<"For Integer Array"<<endl;
    Sort<int> s1;
    s1.sort();
    s1.display();

    cout<<"For Floating Array"<<endl;
    Sort<float> s2;
    s2.sort();
    s2.display();
    return 0;
}