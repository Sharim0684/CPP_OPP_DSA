// Declare a multimap m1 of key-value pairs of integer type and then insert some pair
// type data. Now print the multimap values of m1, and also create another multimap
// m2 of the same type as m1 using m1.begin() and m1.end() as parameters.


#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    multimap<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(3,50));


    cout<<"m1 multimap before inserting an Element: "<<endl;
    multimap<int,int> :: iterator x;
    for(x=m1.begin();x!=m1.end();x++)
    {
        cout<<"key: "<<x->first<< " , values: "<<x->second<<endl;

    }
    m1.insert(pair<int,int>(6,60));
    m1.insert(pair<int,int>(7,50));

    cout<<"m1 multimap after inserting an Element : "<<endl;
    for(x=m1.begin();x!=m1.end();x++)
    {
        cout<<"key: "<<x->first<< " , values: "<<x->second<<endl;

    }

cout<<endl;
    cout<<"another multimap value is : "<<endl;
    multimap<int,int> m2 (m1.begin(), m1.end());
    for(x = m2.begin(); x!= m2.end(); x++)
    {
        cout<<"key: "<<x->first<<" , value: "<<x->second<<endl;
    }
 }