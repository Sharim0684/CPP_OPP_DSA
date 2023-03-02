// Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>
using namespace std;
class Circle 
{
    private:
    float r;
    public:
    void setdata(float n )
    {
        r = n;
    }
    void showdata()

    {
        float  x = 3.14*r*r;
        cout<<"area of circle is "<<x;
    }
};

int main()
{
    Circle c;
    c.setdata(1);
    c.showdata();

    return 0;

}