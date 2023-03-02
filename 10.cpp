// Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc
#include<iostream>
using namespace std;
class Area
{
    private:
    float len,bredth,width,redius;
    public:
    float x,y,z;
    
    void square(float len , float bredth)
    {
         x = len * bredth;
         cout<<"area of square is :"<<x<<endl;
    }
    void rectangle(float len , float width)
    {
         y = len*width;
         cout<<"area of rectangle is :"<<y<<endl;
    }
    void circle(float redius)
    {
          z = 3.14*redius*redius;
          cout<<"area of circle is : "<<z<<endl;
    }
};
int main()
{
    Area s1,r1,c1;
    s1.square(2,3);
    r1.rectangle(2,5);
    c1.circle(3);

    return 0;

}