// Define a function to find the highest value digit in a given number.

#include <iostream>
using namespace std;
int main()
{
    int num, rem = 0, lengh = 0;
    cout << "Enter a digit";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        if (rem > lengh)
        {
            lengh = rem;
        }
        
        num = num/10;
    }
    cout<<"highest value digit number is "<<lengh;
    return 0;
}