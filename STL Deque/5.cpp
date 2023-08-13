// Returns the maximum number of elements that a deque container can hold.

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d = {2,3,5,7,8,4};
    
     
    cout<<"max size element is: "<<d.max_size();

    return 0;
}