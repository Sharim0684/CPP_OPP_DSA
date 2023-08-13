// Write a program remove all consecutive duplicate elements from the forward list

#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1;
    l1.assign({1,2,3,2,3,3,6,7});
    cout << "Original List: ";
    forward_list<int> :: iterator x;
    for(x = l1.begin(); x !=l1.end(); ++x)
    {
        cout<<*x<<' ';
    }
    cout<<endl;
    l1.unique();

    cout<<"remove all consecutive duplicate elements from the forward list : " ;
    for (x = l1.begin(); x!=l1.end();x++)
    {
        cout<<*x<<' ';
    }
    
    return 0;
}