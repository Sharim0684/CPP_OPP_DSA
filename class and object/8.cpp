//  Define a class Rectangle and define an instance member function to find the area of
// the rectangle.

#include <iostream>
using namespace std;
class Rectangle
{
private:
    float len, width;
    int  cal;

public:
    void setdata(float l, float w)
    {
         len=l;
         width=w;
    }
    void showdata()
    {
        cal = len * width;
        cout << cal;
    }
    // inline void showdata();
};

int main()
{
    Rectangle r;
    r.setdata(2, 3);
    r.showdata();
    return 0;
}