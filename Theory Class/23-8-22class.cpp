#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    double marks;
    void getdata();
    void display();
};
void student::getdata()
{
    cout<<"Enter the roll no:";
    cin>>rollno;
    cout<<"Enter the marks:";
    cin>>marks;
}
void student::display()
{
    cout<<rollno<<" "<<marks<<endl;
}
int main()
{
    student std[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<endl;
        std[i].getdata();
    } 
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<endl;
        std[i].display();
    } 
}
