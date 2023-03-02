// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number


#include<iostream>
using namespace std;
class Complex
{
  private:
  int real;
  int img;
  public:
  void set(int r , int i)
  {
    real = r;
    img = i;
  }
  void print()
  {
    cout<<real<<" + "<<img<<"i"; 
  }
};
int main()
{
   Complex c1,c2;
   c1.set(4,3);
   c2.set(4,9);

   c1.print();
   cout<<endl;
   c1.print();

   return 0;
}