//  Access elements of a characters list using const_iterator in C++ STL

#include<bits/stdc++.h>
using namespace std;
int main(){
    list<char>l1;
    for (char i='A';i<='Z';i++)
    {
        l1.push_back(i);
    }
    list<char> :: const_iterator x;
    cout<<"Element of characters list are : ";
    for (x = l1.begin();x != l1.end(); x++)
    {
        cout<<*x<<' ';
    }
    return 0;
}