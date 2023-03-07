// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.

#include<iostream>
using namespace std;
class Box
{
    private:
    float length,breadth,height;
    public:
    Box ()
    {
        length=3;
        breadth=4;
        height =3;

    }
    void showdata();
};
void Box::showdata()
{
   cout<<"volume of Box is:"<<length*breadth*height;
}
int main()
{
   Box b1;
   b1.showdata();

   return 0;
}