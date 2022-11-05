/*Adding the dimension of two cube objects and printing the results for volume of the resultant cube*/

#include<iostream>
#include<algorithm>
using namespace std;

class cube
{
    int side;

    public:

    void input(){
        cout<<"\nEnter the side of the cube : ";
        cin>>side;
    }
    cube operator+(cube c)
    {
        cube t;
        t.side=side+c.side;
        return t;
    }
    void Volume(){
        int vol;
        vol=side*side*side;
        cout<<"\nThe Volume of cube is : "<<vol;
    }

};

int main()
{
    cube c1,c2;
    cout<<"For Cube 1";
    c1.input();
    cout<<"For Cube 2";
    c2.input();
    cube c3=c1+c2;
    cout<<"For Resultant Cube";
    c3.Volume();
    return 0;
}