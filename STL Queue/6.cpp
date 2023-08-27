// In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
// elements arrangement i.e. the elements which insert first will be removed first. In the
// queue, elements are inserted at one end known as "back" and are deleted from
// another end known as "front".empty() and size() function of the queue with the
// Example.


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"The Front Element is : "<<q.front()<<endl;
    cout<<"The back Element is : "<<q.back()<<endl;

    q.pop();

    cout<<"The Front Element is : "<<q.front()<<endl;

    return 0;

}