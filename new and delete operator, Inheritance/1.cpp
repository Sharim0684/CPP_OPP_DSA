// Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.

#include <iostream>
#include <utility>
#include<string>
using namespace std;

class person
{
   private:
    int age;
    string name;

public:
   void setname(string Pname)
    {
        name = Pname;
    }
    void  setage(int page)
    {
        age = page;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
class Employee : public person
{
  
    int empid, salary;

 public:
   void setempid(int Eempid)
    {
        empid = Eempid;
    }
    void setsalary(int Esalary)
    {
        salary = Esalary;
    }
    int getempid()
    {
        return empid;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    Employee e1;
    e1.setname("abc");
    e1.setage(21);
    e1.setempid(1);
    e1.setsalary(40000);
    cout <<e1.getname()<<endl;
   cout <<e1.getage()<<endl;
   cout <<e1.getempid()<<endl;
   cout <<e1.getsalary()<<endl;;
   return 0;
}