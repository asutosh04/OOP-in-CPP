//6.Program to find average marks obtained by a class of 10 students in a test.

#include<iostream>
using namespace std;
int main()
{
    int i, mark[5];
    float sum=0, avg, perc;
    cout<<"Enter Marks obtained in 5 Subjects: \n";
    for(i=0; i<5; i++)
    {
        cout<<"Enter the mark of "<<i+1<<" subject : ";
        cin>>mark[i];
        sum = sum+mark[i];
    }
    avg = sum/5;
    perc = (sum/500)*100;
    cout<<"\nAverage Marks = "<<avg;
    cout<<"\nPercentage Marks = "<<perc<<"%";
    cout<<endl;
    return 0;
}