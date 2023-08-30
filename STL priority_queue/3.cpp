// Write a c++ program, to demonstrate priority queue having a min element at top.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>, greater<int>>q;

    q.push(7);
    q.push(2);
    q.push(4);
    q.push(5);

    while (!q.empty())
    {
        /* code */
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
    
}