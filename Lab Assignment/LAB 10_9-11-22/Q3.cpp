// WAP to read the string from keyboard and write to a file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    fstream file;
    file.open("filhandling.txt", ios ::out | ios ::app);
    if (file.fail())
    {
        cout << "Error Opening file ... " << endl;
    }
    else
    {
        cout << "Enter a line : ";
        getline(cin,line);
        file << line << endl;
        cout << "Line written into the file" << endl;
        file.close();
    }
    return 0;
}