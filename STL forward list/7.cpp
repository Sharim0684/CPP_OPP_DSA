// Below are two forward lists, first sort them and then merge them.
// forwardlist1={3,2,9}
// forwardlist2={8,1,2



#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main()
{
    forward_list<int> l1 {3,2,9};
    forward_list<int> l2 {8,1,2};

    forward_list<int>:: iterator x;
    l1.sort();
    cout<<"first forward list is ";
    for (x=l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<' ';
    }
    cout<<endl;


    l2.sort();
    cout<<"second forward list is ";
    for (x=l2.begin(); x!=l2.end();x++)
    {
        cout<<*x<<' ';
    }
    cout<<endl;

    l1.merge(l2);

     cout<<"merge forward list is ";
    for (x=l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<' ';
    }

    return 0;
}