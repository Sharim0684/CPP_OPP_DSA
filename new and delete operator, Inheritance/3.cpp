// Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.

#include <iostream>
using namespace std;
class mark
{
protected:
    int x, y, z;
    public:
    int accept()
    {
        cout << "Enter first subject mark ";
        cin >> x;
        cout << "Enter second subject mark ";
        cin >> y;
        cout << "Enter third subject mark ";
        cin >> z;
    }
};
class total : public mark
{
protected:
    int summark;
    int per;
public:
    void cal()
    {
        summark = x + y + z;
    }
    void count()
    {
        cout << "the total mark is : " << summark << endl;
    }
   
};
class another : public total
{

    int per;
    public:
     void percenatge()
    {
        per = (summark/3);
    }
    void display()
    {
        cout << "pecentage of student is " << per << endl;
    }
};
int main()
{
    another a;
    a.accept( );

    a.cal();
    a.count();
 
    a.percenatge();
    a.display();

    return 0;
}