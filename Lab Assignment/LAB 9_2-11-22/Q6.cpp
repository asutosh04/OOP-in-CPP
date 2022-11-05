/*Adding the dimension of two cube objects and printing the results for volume of the resultant cube.
Extend this program to compare the volumes of cube1 and cube 2 display the appropriate result by
overloading > operator.*/

#include<iostream>

using namespace std;

class cube
{
    int side;
    int vol;
    public:

    void input(){
        cout<<"\nEnter the side of the cube : ";
        cin>>side;
    }
    int operator>(cube c)
    {
        if(vol>c.vol){
            return 1;
        }
        else{
            return 0;
        }
    }
    void Volume(){
        vol=side*side*side;
        cout<<"The Volume of cube is : "<<vol;
    }

};

int main()
{
    cube c1,c2;
    cout<<"\nFor Cube 1";
    c1.input();
    c1.Volume();
    cout<<"\nFor Cube 2";
    c2.input();
    c2.Volume();
    if(c1>c2){
        cout<<"\nCube 1 is greater than Cube 2.";
    }
    else{
        cout<<"\nCube 2 is greater than Cube 1.";
    }
    
    return 0;
}