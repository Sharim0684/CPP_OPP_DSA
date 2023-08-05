// Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method).

#include<iostream>
using namespace std;
class derived;
class base
{
    protected:
    int num1;
    public:
    base()
    {
        num1=10;

    }
    void show()
     {
        cout<<"the value of num1 is:"<<num1<<endl;
     }
     friend void swap(base *num1, derived *num2);
};
class derived
{
    protected:
    int num2;
    public:
    derived()
    {
        num2=20;
    }
    void show()
    {
        cout<<"the value of num2 is :"<<num2<<endl;
    }
    friend void swap(base *num1, derived *num2);
};
void swap(base *no1, derived *no2)
{
    int no3;

    no3 = no1->num1;
    no1->num1 = no2->num2;
    no2->num2 = no3;
}
int  main()
{
    base b;
    derived d;
    swap(&b, &d);
    b.show();
    d.show();

    return 0 ;
}