// Implement different operations on priority queue .i.e. adding element, removing
// element, size of priority queue, and print it

#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);

    q.pop();

    cout<<"size of Queue is "<<q.size()<<endl;

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();

    }


    return 0;
}