/*WAP to copy the contents of one file to other.*/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string line;

    ifstream i_rfile;
    i_rfile.open("filhandling.txt");
    ofstream c_wfile;
    c_wfile.open("copyfile.txt");
    if (i_rfile && c_wfile)
    {

        while (getline(i_rfile, line))
        {
            c_wfile << line;
        }
        cout << "Copy Finished \n";
    }
    else
    {
        printf("Cannot read File");
    }
    i_rfile.close();
    c_wfile.close();
    return 0;
}