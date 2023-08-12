// Input and add elements to a list C++ STL



#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    int n;
    cout<<"Enter Element in the list: ";
    for (int i = 0; i < 5; i++)
    {
       cin>>n;
       l1.push_back(n);
    }
    
    list<int>:: iterator x;
    // Displaying Elements of List using Iterator
    cout<<"Element in the list is :";
    for ( x = l1.begin(); x!=l1.end() ;x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}