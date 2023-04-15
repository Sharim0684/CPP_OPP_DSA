// Write a C++ program to overload unary operators that is increment and decrement.

#include<iostream>
using namespace std;
class item
{
  private:
  int a;
  public:
  void setdata(int x)
  {
    a=x;
  }
  void showdata()
  {
    cout<<"the unary operator "<<a<<endl;
    a++;
    cout<<"increment is "<<a<<endl;
    a--;
    cout<<"decrement is "<<a<<endl;

  }

};
int main()
{
   item i1,i2;
   i1.setdata(2);
   
   i1.showdata();
   i2.setdata(5);
    
   i2.showdata();
   return 0;
}