// Write a program to reverse forward list elements.


#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> l1;

    for (int i = 0; i <=10; i++)
    {
        l1.push_front(i);
    }

    l1.reverse();
    forward_list<int> :: iterator x;

    for( x=l1.begin(); x != l1.end(); x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}