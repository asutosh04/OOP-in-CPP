/*ii. Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA
and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee, using virtual
function*/

#include <iostream>
using namespace std;
class Employee{
    protected:
        string name;
        int id;
        double salary;
    public:
    Employee(){
        cout<<"\nEnter the Name and ID: ";
        cin>>name>>id;
    }
    
    virtual void display(){
        cout<<"\nThe is the virtual function\n";
    }
};

class Regular: public Employee{
    private:
        double DA;
        double HRA;
        double basic_salary;
    public:
    Regular(){
        cout<<"Enter the DA , HRA and Basic Salary : ";
        cin>>DA>>HRA>>basic_salary;
    }
    void display(){
            cout<<"Salary of the Regular employee is "<<(DA+HRA+basic_salary);
        }
    
};


class PartTime: public Employee{
    private:
        int nh;
        double pph;
    public:
        PartTime(){
            cout<<"Enter the Number of Hours and Pay Per Hour : ";
            cin>>nh>>pph;
        }
        void display(){
            cout<<"Salary of the part-time employee is "<<(nh*pph);
        }
};

int main()
{
    Employee *e;

    Regular r;
    e=&r;
    e->display();

    PartTime p;
    e=&p;
    e->display();
    return 0;
}