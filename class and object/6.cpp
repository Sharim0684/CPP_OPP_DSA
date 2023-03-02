// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.

#include<iostream>
using namespace std;

class Square
{
    private:
    static int c;
    int r,n;

    public:
   void setdata();
   void showdata();
   void display();
};
 int Square::c=0;
 void Square::setdata()
    {
       cout<<"Enter a number ";
       cin>>n;
       c++;
    }
 void Square::showdata()
    {
        r = n*n;
        
        c++;
         
    }
 void Square::display()
 {
     cout<<"sqaure is "<<r<<endl;
     cout<<"function count is "<<c<<endl;
 }
      
int main()
{
    Square a;
    a.setdata();
    a.showdata();
    a.display();
     

    return 0;
}