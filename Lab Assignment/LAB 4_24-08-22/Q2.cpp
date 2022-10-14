/*2. Assign and print the roll number, phone number and address of two 
students having names "Sam" and "John" respectively by creating two 
objects of the class 'Student'.*/

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    long phone_no;
    string address;
    void get_data()
    {
            cout<<"Enter the details of student(Name,Roll No,Phone No,Address):"<<endl;
            cin>>name>>roll_no>>phone_no>>address;

    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll number : "<< roll_no << endl;
        cout << "Phone Number : " << phone_no << endl;
        cout << "Address : " << address << endl;
    }
};
int main()
{
    Student s[2];
    for(int i=0;i<2;i++){
        s[i].get_data();
    }
    for(int i=0;i<2;i++){
        s[i].display();
    }
    return 0;
}