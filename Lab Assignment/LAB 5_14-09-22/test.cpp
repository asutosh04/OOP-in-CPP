#include <iostream>
using namespace std;

class student{
    
    private:
        int rollno;
        string name;
        int age;
    
    public:
        student(){
            cout<<"Enter Roll No, Name, Age : ";
            cin>>rollno>>name>>age;
        }

        void userdetails(){
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        }
};

class test : public student{
    protected:
    float m[5];

    public:
    test(){
        cout<<"Enter the marks of 5 subjects : ";
        for (int i=0;i<5;i++){
            cin>>m[i];
        }
    }
    void marks(){
        cout<<"Entered marks are : ";
        for (int i=0;i<5;i++){
            cout<<m[i]<<" ";
        }
        cout<<endl;
    }
};

class result : public test
{
    private:
    float total=0,per;
    public:
    result(){
        for (int i=0;i<5;i++){
            total=total+m[i];
        }
        per=(total/500)*100;
    }

    void percentage(){
        cout<<"Total Marks is : "<<total<<endl;
        cout<<"Percentage is : "<<per<<endl;
    }
    
    void display(){
        userdetails();
        marks();
        percentage();
    }
};

int main(){
    result r1;
    r1.display();
}