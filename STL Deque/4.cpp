// . Returns a constant iterator pointing to the first element of the container, that is, the
// iterator cannot be used to modify, only traverse the deque

#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d ={ 1,2,3,4,5};

    deque<int>::const_iterator x=d.cbegin();
    cout<<"the element in the deque using const iterator : ";
    while (x !=d.cend())
    {
       cout<<*x<<" ";
       x++;

    }
    return 0;
    
}
