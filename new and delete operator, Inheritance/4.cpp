// Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salar

#include <iostream>
using namespace std;
class person
{
protected:
    char name[10], address[10];
    int phoneno;
};
class Employee : public person
{
public:
    int eno;
    char ename[25];
};
class manager : public Employee
{
public:
    char distination[10], department[10];
    float basic_salary;

public:
    void details()
    {
        cout << "Enter detail of Manager " << endl;
        cout << "-------------------------------------" << endl;
        cout << "Enter Employee no: " << endl;
        cin >> eno;
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Address: " << endl;
        cin >> address;
        cout << "Enter phone no: " << endl;
        cin >> phoneno;
        cout << "Enter Destination: " << endl;
        cin >> distination;
        cout << "Enter Department Name: " << endl;
        cin >> department;
        cout << "Enter Department Name: " << endl;
        cin >> department;
        cout << "Enter Base salary : " << endl;
        cin >> basic_salary;
    }
};
int main()
{
    int i,cnt;
    manager man[100];
    cout<<"How many manager you want to enter: "<<endl;
    cin>>cnt;
    for (int i = 0; i <cnt ; i++)
    {
         man[i].details();
    }
   int  temp=0;
     for (int i = 0; i <cnt ; i++)
{
    if(man[i].basic_salary<man[i].basic_salary)
    temp=i;
}
cout<<"manager with highest salary is "<<man[temp].basic_salary<<endl;
cout<<"manager name is : "<<man[i].ename<<endl;
return 0;
}