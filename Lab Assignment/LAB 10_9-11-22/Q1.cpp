/*WAP to read the contents of a file and display in the screen*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream rfile;
    string data;

    rfile.open("filhandling.txt");
    while(!rfile.eof()){
        getline(rfile,data);
        cout<<data<<endl;
    }


    rfile.close();
    return 0;
}
