// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int number ;
    public:
    void setdata(int n)
    {
        number = n;

        int rem, rev=0;
    
   while (number)
   {
       rem = number%10;
       rev = (rev*10)+rem;
       number = number/10;

       
   }
   cout<<"reverse of  "<<n <<" is "<<rev<<endl;
    }
};
int main()
{
    ReverseNumber r;
    int number ;
    cout<<"Enter a  number ";
    cin>>number;

    r.setdata(number);

    return 0;
}