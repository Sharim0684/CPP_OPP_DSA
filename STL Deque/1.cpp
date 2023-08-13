// Inserts an element. And returns an iterator that points to the first of the newly inserted
// elements.


#include<iostream>
#include<queue>
#include<iterator>
using namespace std;
int main()
{
    deque<int> d = { 2,3,4,5};
    d.insert(d.begin(),1);

    deque<int>:: iterator x;
    for(x = d.begin(); x!=d.end(); x++)
    {
        cout<<*x<<" ";

    }
    return 0;
}