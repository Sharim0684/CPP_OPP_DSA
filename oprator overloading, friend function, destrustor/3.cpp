// Write a C++ program to add two complex numbers using operator overloaded by a
// friend function

#include<iostream>
using namespace std;
class complex
{
   private:
   int a,b;
   public:
   void setdata(int x,int y)
   {
    a=x;
    b=y;
   }
   void showdata()
   {
    cout<<"real= " << a << " img = " <<b<<endl;
   }
   friend complex operator+(complex,complex);
};
complex operator+(complex l, complex z)
   {
      complex temp;
      temp.a = l.a+z.a;
      temp.b = l.b+z.b;
      return temp;
   }
int main()
{
  complex c1,c2,c3;
  c1.setdata(2,3);
  c2.setdata(3,3);
  c3=operator+(c1,c2);
  c1.showdata();
  c2.showdata();
  c3.showdata();

  return 0;
}