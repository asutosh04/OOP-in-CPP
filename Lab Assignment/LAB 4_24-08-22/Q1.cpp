/*1. Create a class named 'Student' with a string variable 'name' and an 
integer variable 'roll_no'. Assign the value of roll_no as '2' and that 
of name as "John" by creating an object of the class Student.*/

#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_no;
    void get_data(){
        cout<<"\nRoll No : "<<roll_no<<endl;
        cout<<"Name : "<<name;
    }
} ;

int main(){
Student std;
cout<<"Enter the roll no : ";
cin>>std.roll_no;
cout<<"\nEnter the name : ";
cin>>std.name;
std.get_data();
}