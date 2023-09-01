// Create a function to search the element in the set.


#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s = { 100,200,300,400};
    auto it = s.find(300);

    if(it == s.end())
    {
        cout<<"Element not  found ";
    }
    else
     {
        cout<<"Element "<<*it;
     }
    return 0;
}