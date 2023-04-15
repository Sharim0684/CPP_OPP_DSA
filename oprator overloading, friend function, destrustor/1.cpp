#include<iostream> 
using namespace std;
class complex
{
  private:
  int a,b;
  public:
  void setdata(int x, int y)
  {
    a=x;
    b=y;
  }
  void showdata()
  {
    cout<<"real = "<<a<<" img = "<<b<<endl;
  }
   complex operator+(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
complex operator-()
{
    complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
}
complex operator*(complex s)
{
    complex temp;
    temp.a=a * s.a;
    temp.b=b * s.b;
    return temp;
}
complex operator==(complex z)
{
    complex temp;
    temp.a = a == z.a;
    temp.b = b == z.b;
    return temp;
}
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,3);
    c2.setdata(3,3);
    c3=c1+c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c3=-c1;
    c3.showdata();
    c3 = c1*c2;
    c3.showdata();
    c3= c1==c2;
    c3.showdata();
    return 0;
}