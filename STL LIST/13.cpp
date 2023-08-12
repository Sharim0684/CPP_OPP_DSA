// Push characters in a list and print them separated by space in C++ STL


#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<char> l1;

    for (char i = 'A'; i <= 'Z'; ++i)
    {
        l1.push_back(i);
    }
    
    list<char>:: iterator x;
    cout<<" character in the list is : ";
    for( auto x=l1.begin(); x != l1.end(); x++)
    {
        cout<<*x<<' ';
    }
    return 0;
}