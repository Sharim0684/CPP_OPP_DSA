// Create a stack, and implement main operations like push(), pop(), peek(), empty()
// and size().


#include<iostream>
#include<stack>
#include<iterator>
using namespace std;
int main()
{
    stack<int> s;

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"size of the stack  is "<<s.size()<<endl;
    
    if(s.empty())
    {
        cout<<"stack is Empty";
    }
    else
    {
        cout<<"stack is not empty";
    }
    cout<<endl;
    cout<<"Stack Element are : ";
    while (!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}