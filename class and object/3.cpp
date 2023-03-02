//  Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.

#include<iostream>
using namespace std;
class factorial
{
    private:
    int num;
    public:
    void setdata(int f)
    {
        num = f;
    }
    inline void fact();
};
void factorial::fact()
{
    int fact =1;
    for (int i = 1; i <=5; i++)
    {
      fact = fact*i;
    }
    cout<<fact;
}
int main()
{
   factorial f1;
   f1.setdata(5);
   f1.fact();
}