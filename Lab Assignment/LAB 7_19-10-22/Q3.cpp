/*iii. Create a class which stores account number, customer name and balance. Derive two
classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member
functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function.*/

#include<iostream>
using namespace std;

class Account
{
    protected:
    static int anum;
    static string name;

    public:
    static int objcount;
    static float balance;
    Account(int a)
    {
        objcount++;
        if(objcount==1){
        cout<<"Enter the account number : ";
        cin>>anum;
        cout<<"Enter the customer name : ";
        cin>>name;
        }
    }

    virtual void display(){
        cout<<"\nThis is the virtual function\n";
    }
    virtual void withdraw(){
        cout<<"\nThis is the virtual function\n";
    }

    virtual void deposit(){
        cout<<"\nThis is the virtual function\n";
    }
};

class Savings:public Account
{
    static float minbal;
    public:
    Savings(int a):Account(a){}

    void withdraw(){
        float wb;
        cout<<"Enter the amount to be withdrawn : ";
        cin>>wb;
        if(balance-wb<minbal){
            cout<<"\nTransaction Failed\nInsufficient Balance!\n";
            minbalance();
        }
        else{
            balance=balance-wb;
        }
    }

    void minbalance(){
        cout<<"The Minimum Balance in the account should be "<<minbal<<endl;
    }

    void deposit(){
        float amt;
        cout<<"Enter the amount to be deposited : ";
        cin>>amt;
        balance=balance+amt;
    }

    void display(){
        cout<<"\nCurrent Balance is : "<<balance<<endl;
    }

};

class Current:public Account
{
    static float overdue;
    public:
    Current(int c):Account(c){}
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

    void display(){
        cout<<"\nCurrent Balance is : "<<balance<<endl;
    }
};

float Account::balance=0;
float Savings::minbal=100;
float Current::overdue=0;
int Account::objcount=0;
int Account::anum;
string Account::name;

int main()
{
    int ch,chh;
    Account *a;
    Current c(0);
    Savings s(0);
    
    while(1)
    {
        cout<<"\nBANKING\n";
        cout<<"\n1.FOR SAVINGS ACCOUNT\n";
        cout<<"\n2.FOR CURRENT ACCOUNT\n";
        cout<<"\n0.FOR CANCEL TRANSACTION\n";
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>ch;
        switch (ch)
        {

        case 1:
            a=&s;
            cout<<"\nSAVINGS ACCOUNT\n";
            while(2)
            {
                cout<<"\nBANKING\n";
                cout<<"\n1.WITHDRAW AMOUNT\n";
                cout<<"\n2.DEPOSIT AMOUNT\n";
                cout<<"\n3.DISPLAY BALANCE\n";
                cout<<"\n0.CANCEL TRANSACTION\n";
                cout<<"\nENTER YOUR CHOICE : ";
                cin>>chh;
                switch (chh)
                {
                case 1:
                    a->withdraw();
                    break;
                case 2:
                    a->deposit();
                    break;
                case 3:
                    a->display();
                    break;
                case 0:
                    cout<<"\nThank You! Have a Good Day!\n";
                    exit(2);
                    break;
                default:
                    cout<<"\nIncorrect Entry! Enter Again!\n";
                    break;
                }
            }
            break;

        case 2:
            a=&c;
            cout<<"\nCURRENT ACCOUNT\n";
            while(3)
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
                    a->withdraw();
                    break;
                case 2:
                    a->deposit();
                    break;
                case 3:
                    a->display();
                    break;
                case 4:
                    c.displayoverdue();
                    break;
                case 0:
                    cout<<"\nThank You! Have a Good Day!\n";
                    exit(3);
                    break;
                default:
                    cout<<"\nIncorrect Entry! Enter Again!\n";
                    break;
                }
            }       
            
        case 0:
            cout<<"\nThank You! Have a Good Day!\n";
            exit(1);
            break;
        
        default:
            cout<<"\nIncorrect Entry! Enter Again!\n";
            break;
        }
    }
    return 0;
}