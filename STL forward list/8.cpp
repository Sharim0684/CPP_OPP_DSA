// Create two forward lists of int type, and swap the elements of both forward lists with
// each other.


#include<iostream>
#include<iterator>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> l1 {2,3,4,5};
    forward_list<int> l2 {6,7,8,9};


    forward_list<int> :: iterator x;
    cout<<"first forward_list  is : ";
    for (x = l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<' ';

    }
    cout<<endl;
    cout<<"second forward_list  is : ";
    for (x = l2.begin(); x!=l2.end();x++)
    {
        cout<<*x<<' ';

    }
    cout<<endl;

    l1.swap(l2);
    cout<<"after swaping Element is : "<<endl;
    
    cout<<"first forward_list  is : ";
    for (x = l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<' ';


    }
    cout<<endl;
    cout<<"second forward_list  is : ";
    for (x = l2.begin(); x!=l2.end();x++)
    {
        cout<<*x<<' ';


    }
    return 0;
}