// Check if a queue is empty or not using queue::size() function

#include<iostream>
#include<queue>
using namespace std;
int main()

{
    queue<int> q;
    q.push(2);
    q.push(3);

    if(q.size()==0)
    {
        cout<<"Queue is Empty";

    }
    else
    {
        cout<<"Queue is not Empty";

    }
    cout<<endl;

    q.pop();
    q.pop();
    if(q.size()==0)
    {
        cout<<"Queue is Empty ";

    }
    else
    {
        cout<<"Queue is not Empty";
    }

    return 0;
}