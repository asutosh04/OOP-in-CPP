#include <iostream>
using namespace std;
class time{
    int hh,mm;

    public:
    //Default Constructor
    time(){
        hh=12,mm=12;
        cout<<"Default constructor is called"<<endl;
    }

    //Parametrized Constructor
    time(int hour,int min=0){
        hh=hour;
        mm=min;
        cout<<"Parametrized constructor is called"<<endl;
    }
    
    //Copy Comstructor
    time(time &t){
        hh=t.hh;
        mm=t.mm;
        cout<<"Copy constructor is called"<<endl;       
    }

    void getdata(){
        char ch;
        cout<<"Enter the hour : ";
        cin>>hh;
        cout<<"YOU WANT TO ENTER MINUTE??"<<endl;
        cout<<"Type ('Y' for Yes) ('N' for No)"<<endl;
        cin>>ch;
        if(ch==89 || ch==121){
        cout<<"Enter the minutes : ";
        cin>>mm;            
        }
        else if (ch==78 || ch==110){
            mm=0;
            cout<<"Bydefault Minute=0"<<endl;
        }
        else{
            //mm=0;
            cout<<"Incorrect Entry!!!"<<endl<<"Bydefault Minute=0"<<endl;
        }
    }

    void display(){
        cout<<"Time is "<<hh<<":"<<mm<<endl;
    }

    ~time(){
        cout<<"Destructor is called"<<endl;
    }

};

int main(){

    time t1;
    t1.display();
    time t2(_argc,_argc);
    t2.getdata();
    t2.display();
    time t3=t2;
    t3.display();
    return 0;
}