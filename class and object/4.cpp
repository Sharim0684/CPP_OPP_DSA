// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class

#include<iostream>
using namespace std;
class LargestNumber
{
    private:
    int a,b,c;
    public:
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    
    inline void showData();
};
void LargestNumber::showData()
{    
    if(a>=b && a>=c )
    {
       cout<<"a is greater "<<endl;
    }
    else if(b>=a && b>=c )
    {
        cout<<"b is greater "<<endl;
    }
    else 
    {
        cout<<"c is greater than a and b";
    }
}
int main()
{
     LargestNumber b1;
     b1.setdata(23,5,11);
     b1.showData();

     return 0;
}