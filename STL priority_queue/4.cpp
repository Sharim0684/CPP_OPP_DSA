// Write a c++ program, to swap the elements of two priority queues of int type.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q1;
    priority_queue<int> q2;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    q2.push(5);
    q2.push(6);
    q2.push(7);
    q2.push(8);
    q2.push(9);

    q1.swap(q2);
    cout<<"Queue q1 is : ";
    while (!q1.empty())
    {
        cout<<q1.top()<<" ";
        q1.pop();

    }
    cout<<endl;
    cout<<"Queue q2 is: ";
    while (!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    
    return 0;
}