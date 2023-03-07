// Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.

#include<iostream>
using namespace std;
class Bank
{
    private:
    float p,r,y;
    public:
    Bank ()
    {
        p=1200;
        r=2;
        y=5.4;
    }
    void read();
    void showdata();

};
void Bank::read()
{
    cout<<"principal is : "<<p<<endl;
    cout<<"rate of interest is: "<<r<<endl;
    cout<<"year is : "<<y<<endl;
}
void Bank::showdata()
{
    cout<<"simple interest is: "<<(p*r*y)/100;
}
int main()
{
    Bank b1;
    b1.read();
    b1.showdata();
}