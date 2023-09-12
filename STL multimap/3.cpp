// Write a c++ code for illustration of multimap::swap() function.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int ,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));

    cout<<"first multimap is : "<<endl;
    multimap<int,int> :: iterator x;
    for(x = m1.begin(); x!=m1.end();x++)
    {
        cout<<"key: "<<x->first<<" , value: "<< x->second<<endl;

    }

    multimap<int,int> m2;
    m2.insert(pair<int,int>(4,55));
    m2.insert({5,555});
    m2.insert({6,6});
    cout<<"second multimap is : "<<endl;
    for (x = m2.begin(); x != m2.end(); x++)
    {
        cout<<"key: "<<x->first<<" , value: "<<x->second<<endl;
    }
    
    m1.swap(m2);

    cout<<"after swapping : "<<endl;

    cout<<"first multimap Element is: "<<endl;
    for (x = m1.begin(); x!=m1.end();x++)
    {
        cout<<"key: "<< x->first<< " , value: "<<x->second<<endl;
    }
    cout<<"second multimap is : "<<endl;

    for(x = m2.begin(); x != m2.end() ; x++)
    {
        cout<<"key: "<<x->first<<" , value: "<<x->second<<endl;
    }
    return 0;
}