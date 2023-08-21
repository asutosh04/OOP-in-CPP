#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream rfile;
    ofstream ofile;
    string data;
    ofile.open("newfile.txt" , ios :: out | ios :: app);

    rfile.open("copyfile.txt" , ios :: in | ios :: app );
    while(!rfile.eof()){
        getline(rfile,data);
        ofile<<data<<endl;
    }
    cout<<"\nFrom file 1 completed."<<endl;
    rfile.close();

    rfile.open("filhandling.txt" , ios :: in | ios::app);
    while(!rfile.eof()){
        getline(rfile,data);
        ofile<<data<<endl;
    }
    cout<<"\nFrom file 2 completed."<<endl;
    rfile.close();
    ofile.close();
    return 0;
}
