/*iv. Extend the program ii. of inheritance to include a class sports, which stores the marks in
sports activity. Derive the result class from the classes ‘test’ and ‘sports’. Create objects
using parameterized constructors .Calculate the total marks and percentage of a student.
INHERITANCE
ii. Create a class student which stores name, roll number and age of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.
*/

#include <iostream>
using namespace std;

class student{
    
    private:
        int rollno;
        string name;
        int age;
    
    public:
        student(int s){
            cout<<"Enter Roll No, Name, Age : ";
            cin>>rollno>>name>>age;
        }

        void userdetails(){
        cout<<"\n\nUserdetails"<<endl;
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        }
};

class test : public student{
    protected:
    float m[5];

    public:
    test(int t):student(t)
    {
        cout<<"Enter the marks of 5 subjects : ";
        for (int i=0;i<5;i++){
            cin>>m[i];
        }
    }

};

class sports {
    protected:
    int smark;
    public:
    sports(int s)
    {
        cout<<"Enter the marks in sports : ";
        cin>>smark;
    }
};

class result : public test , public sports
{
    private:
    float total=0,per;
    public:
    result(int r):test(r),sports(r)
    {
        for (int i=0;i<5;i++){
            total=total+m[i];
        }
        total=total+smark;
        per=(total/600)*100;
    }

    void marks(){
        cout<<"Entered marks are : ";
        for (int i=0;i<5;i++){
            cout<<m[i]<<" ";
        }
        cout<<smark;
        cout<<endl;
    }

    void percentage(){
        cout<<"Total Marks is : "<<total<<endl;
        cout<<"Percentage is : "<<per<<"%"<<endl;
    }
    
    void display(result r){
        r.userdetails();
        r.marks();
        r.percentage();
    }
};

int main(){
    result r1(0);
    r1.display(r1);
}