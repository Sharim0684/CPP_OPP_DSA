// Define a class Date and write a program to Display Dateand initialise date object
// using Constructors

#include<iostream>
using namespace std;
class Date
{
   private:
   int dd,mm,yy;
   public:
   Date ()
   {
     dd=13;
     mm=06;
     yy=2002;
   }
   void display()
   {
    cout<<"Enter date is :: ";
    cout<<dd<<"/"<<mm<<"/"<<yy;
   }
};
int main()
{
    Date c;
    c.display();

    return 0;
}