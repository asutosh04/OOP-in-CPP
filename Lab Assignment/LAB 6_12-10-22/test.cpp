/*v. Rewrite the assignment vii. From Inheritance including the parameterized constructors in
all the classes.
INHERITANCE
vii. Create a class which stores account number, customer name and balance. Derive two
classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member
functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
*/

#include<iostream>
#include<algorithm>
using namespace std;

class Account
{
    public:
    int anum;
    string name;

    public:
    static float balance;
    Account(int a)
    {
        cout<<"Enter the account number : ";
        cin>>anum;
        cout<<"Enter the customer name : ";
        cin>>name;
    }



    void display(){
        cout<<"\nCurrent Balance is : "<<balance<<endl;
    }

};

class Savings:public Account
{
    static float minbal;
    public:
    Savings(int a):Account(a)
    {
        cout<<"\nSAVINGS ACCOUNT\n";
        int ch;
        while(1)
        {
            cout<<"\nBANKING\n";
            cout<<"\n1.WITHDRAW AMOUNT\n";
            cout<<"\n2.DEPOSIT AMOUNT\n";
            cout<<"\n3.DISPLAY BALANCE\n";
            cout<<"\n0.CANCEL TRANSACTION\n";
            cout<<"\nENTER YOUR CHOICE : ";
            cin>>ch;
            switch (ch)
            {
            case 1:
                withdraw();
                break;
            case 2:
                deposit();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(1);
            default:
                cout<<"\nIncorrect Entry! Enter Again!\n";
                break;
            }
        }
    }

    void withdraw(){
        float wb;
        cout<<"Enter the amount to be withdrawn : ";
        cin>>wb;
        if(balance-wb<minbal){
            cout<<"\nInsufficient Balance!\n";
        }
        else{
            balance=balance-wb;
        }
    }

    void deposit(){
        float amt;
        cout<<"Enter the amount to be deposited : ";
        cin>>amt;
        balance=amt;
    }

};

class Current:public Account
{
    static float overdue;
    public:
    Current(int c):Account(c)
    {
        cout<<"\nCURRENT ACCOUNT\n";
        int ch;
        while(true)
        {
            cout<<"\nBANKING\n";
            cout<<"\n1.WITHDRAW AMOUNT\n";
            cout<<"\n2.DEPOSIT AMOUNT\n";
            cout<<"\n3.DISPLAY BALANCE\n";
            cout<<"\n4.DISPLAY OVERDUE\n";
            cout<<"\n0.CANCEL TRANSACTION\n";
            cout<<"\nENTER YOUR CHOICE : ";
            cin>>ch;
            switch (ch)
            {
            case 1:
                withdraw();
                break;
            case 2:
                deposit();
                break;
            case 3:
                display();
                break;
            case 4:
                displayoverdue();
                break;
            case 0:
                exit(1);
            default:
                cout<<"\nIncorrect Entry! Enter Again!\n";
                break;
            }
        }
    }
    void withdraw(){
        float wb;
        float rem;
        cout<<"Enter the amount to be withdrawn : ";
        cin>>wb;
        if(balance==0)
        {
            overdue=overdue-wb;
        }
        else if(balance<wb)
        {
            overdue=balance-wb;
            balance=balance-balance;
        }
        else 
        {
            balance=balance-wb;
        }
    }

    void deposit(){
        float amt;
        cout<<"Enter the amount to be deposited : ";
        cin>>amt;
        if(overdue<0)
        {
            if(amt>(-1)*overdue)
            {
                balance=amt+overdue;
                overdue=0;
            }
            else if(amt<(-1)*overdue)
            {
                balance=0;
                overdue=amt+overdue;
            }
        }
        else
        {
            balance=balance+amt;
        }
        
    }

    void displayoverdue(){
        cout<<"Overdue is : "<<overdue;
    }
};

float Account::balance=0;
float Savings::minbal=100;
float Current::overdue=0;

int main()
{
    int ch,chh;
    Current c(0);
    Savings s(0);
    return 0;
}