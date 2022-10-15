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
    Regular r;
    r.display();
    PartTime p;
    p.display();
    return 0;
}