// Write a c++ program, to use priority_queue to implement min heap.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>>q;

    q.push(2);
    q.push(4);
    q.push(1);
    q.push(6);

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();

    }
    return 0;
}