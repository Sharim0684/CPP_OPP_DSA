// Define a function to check whether a given number is a term in a Fibonacci series or
// not

#include <iostream>
using namespace std;
 
 
int fabonacci(int n)
{

    int next = 0, prev = 0, cur = 1;
    for (int i = 0; i < n; i++)
    {
        next = prev + cur;
        prev = cur;
        // cout<<next;
        cur = next;
        if (next == n)
        {
            cout << "number is found ";
            break;
        }
        else if (next > n)
        {
            cout << "number is not found";
            break;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    fabonacci(n);
}
