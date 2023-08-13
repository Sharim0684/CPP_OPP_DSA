// Create a forward list insert elements from 1 to 10 and find the sum of elements.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l;

    for (int i = 1; i <=10 ; i++)
    {
        l.push_front(i);
    }
    int sum=0;
    for (int i = 1;i<=10; i++)
    {
        sum = sum + i;
    }
    cout<<sum<<" ";

    return 0;
    
    
}