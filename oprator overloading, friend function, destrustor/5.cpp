#include<iostream> 
using namespace std;
class number 
{
    private:
    int a,b;
    public:
    void setdata(int x)
    {
        a=x;
       
    }
    void showdata()
    {
        cout<<"unary is "<<a;
    }
    number operator-()
    {
        number temp;
        temp.a = -a ;

        return temp;
    }

};
int main()
{
    number n1,n2;
    n1.setdata(3);
    n2= -n1;
    n2.showdata();

    return 0;

}