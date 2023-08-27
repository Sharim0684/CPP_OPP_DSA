// Adds the element ‘g’ at the end of the queue.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> q;

    q.push('a');
    q.push('b');
    q.push('g');

      

    cout<<"Front is : "<<q.front();

    cout<<endl;
while (!q.empty())
{
    cout<<q.front();
    q.pop();
}

    return 0;


}