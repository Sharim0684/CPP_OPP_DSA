//  Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.


#include<iostream>
using namespace std;
class time
{
    private:
   int hr;
   int min;
   int sec;
   public:
   void setdata(int a, int b, int c)
   {
       hr = a;
       min = b;
       sec = c;
   }
   void showada()
   {
    cout<<hr<<" "<<"hr " <<min<<" "<<"min " <<sec<<" "<<"sec";
   }
};
int main()
{
    time t1;
    t1.setdata(3,45,20);
    t1.showada();
}