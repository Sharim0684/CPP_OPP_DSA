// Write a C++ program to illustrate the load_factor() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int> i;
    i.insert(22);
    i.insert(13);

    cout<<"size is : "<<i.size()<<endl;
    cout<<"bucket count is : "<<i.bucket_count()<<endl;
    cout<<"load factor is : "<<i.load_factor()<<endl;

    cout<<endl;
    i.insert(10);
    i.insert(1);

     cout<<"size is : "<<i.size()<<endl;
    cout<<"bucket count is : "<<i.bucket_count()<<endl;
    cout<<"load factor is : "<<i.load_factor()<<endl;

    cout<<endl;
    i.insert(2);

     cout<<"size is : "<<i.size()<<endl;
    cout<<"bucket count is : "<<i.bucket_count()<<endl;
    cout<<"load factor is : "<<i.load_factor()<<endl;

    return 0;
}