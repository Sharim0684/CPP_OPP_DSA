// Assign values to the same or different deque container.

#include<iterator>
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    deque<int> d1;
    d1.assign({2,3,4,5,6});
   // d.assign({2,3,4,5,6,7});
    deque<int> :: iterator x;
    cout<<"Assign Element in the deque is : ";
    for(x = d1.begin(); x!=d1.end();x++)
    {
        cout<<*x<<' ';
    }
    return 0;
}