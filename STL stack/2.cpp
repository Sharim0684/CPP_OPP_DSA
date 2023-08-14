// Create a stack of int type, and find the top most element in a stack.


#include<iostream>
#include<stack>
#include<iterator>
using namespace std;
int main()
{
    stack<int> s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Top most Element in the stack is : "<<s.top();

    return 0;
}