// Iterate a list in reverse order C++ STL


#include<iostream>
#include<list>
using namespace std;
int  main()
{
    list<int> l1;

    for (int i = 0; i < 6; i++)
    {
        l1.push_back(i);
    }

    l1.reverse();

    list<int>:: iterator x;
    cout<<"reverse list is : ";
    for (x = l1.begin(); x != l1.end() ; x++)
    {
        cout<< *x << " ";
    }
    return 0;

    
}