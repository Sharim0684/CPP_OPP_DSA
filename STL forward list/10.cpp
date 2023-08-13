//  Write a program to assign values in forward_list using the values of another lis

#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l1 = {2,3,4,5};
    forward_list<int> l2 ;

    l2.assign(l1.begin(), l1.end());

    forward_list<int> :: iterator x;
    cout<<"Element in the list is : ";
    for (x = l2.begin(); x != l2.end(); x++)
    {
        cout<<*x<<' ';
    }
    return 0;
}