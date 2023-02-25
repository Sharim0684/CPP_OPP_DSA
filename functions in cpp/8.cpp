// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle


#include<iostream>
using namespace std;

float circle(float r)
{
   return (3.14*r*r);
}
float rectangle(float l, float b)
 {
     return  (l*b);
}
float triangle(float b, float h )
{
     return (0.5*b*h);
}

int main()
{
    int red,len,br,height,base;
    cout<<"Enter radius of circle";
    cin>>red;
    cout<<"Enter the size of length and bredth";
    cin>>len>>br;
    cout<<"Enter a size of base and height";
    cin>>base>>height;
    // circle(red);
    // rectangle(len,br);
    // triangle(base,height);

    cout<<"the area of circle is "<<circle(red)<<endl;
    cout<<"the area of rectangle is "<<rectangle(len,br)<<endl;
    cout<<"the area of triangle is "<<triangle(base,height)<<endl;
    return 0;
}