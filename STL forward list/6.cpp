// Create two forward lists of int type, and merge them.


#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>l1;
    forward_list<int>l2;

    l1.assign({2,3,4,5});
   

    forward_list<int> :: iterator x;
    cout<<"first forward list is : ";
    for(x = l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;


     l2.assign({6,7,8,9});
    cout<<"second forward list is : ";
    for(x = l2.begin(); x!=l2.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;


    l1.merge(l2);
    cout<<" merge forward list is  : ";
    for(x = l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}