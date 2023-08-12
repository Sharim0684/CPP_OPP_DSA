// Remove all occurrences of an element and remove set of some specific from the list
// C++ STL


#include<iostream>
#include<list>

using namespace std;
int main()
{
    list<int> l1;
    
    for (int i = 0; i < 5; i++)
    {
        l1.push_back(i*100);
    }
    l1.push_front(1000);
    l1.push_front(100);
    l1.push_front(200);
    l1.remove(300);
    list<int> :: iterator x;

    for (x = l1.begin(); x != l1.end();++x)
    {
        cout<<*x<<" ";
    }
    
    return 0;
}