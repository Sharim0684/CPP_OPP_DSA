// Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.

#include <iostream>
using namespace std;
class add
{
protected:
    int num1, num2;

public:
    void accept()
    {
        cout << "Enter first number";
        cin >> num1;
        cout << "Enter second number";
        cin >> num2;
    }
};
class addition : public add
{
    int sum;

public:
    void add()
    {
        sum = num1 + num2;
    }
    void display()
    {
        cout << "addition of two number is : " << sum;
    }
};
int main()
{
    addition a1;
    a1.accept();
    a1.add();
    a1.display();

    return 0;
}