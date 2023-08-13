// Returns a reverse iterator which points to the last element of the deque (i.e., its
// reverse beginning

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d={1,2,3,4,5};

    deque<int> :: reverse_iterator reversex  = d.rbegin();

    cout<<"Last element of the deque (using reverse iterator): "<<*reversex<<" ";

    return 0;
}