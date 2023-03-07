//  Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include <iostream>
using namespace std;
class Cube
{
private:
    int a, b, c;

public:
    Cube(int x, int y, int z)

    {
        int s;
        a=x;
        b=y;
        c=z;

        s = a*b*c;
         cout<<"the volume of cube is: "<<s<<endl;
    }
   
};

int main()
{
    Cube c1(2,3,4),c2(2,2,2);

    return 0;
}