// Write a c++ program, to demonstrate priority queue

#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(10);
    q.push(8);

    while (!q.empty())
    {
       cout<<q.top()<<" ";
       q.pop();

    }
    return 0;
}