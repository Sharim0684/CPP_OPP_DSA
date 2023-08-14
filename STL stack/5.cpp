// . Create stack1 of int type, and create another stack of the same type with name
// stack2 and copy all the elements of stack1 into stack2 in the same order.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack < int > stack1 ;

    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    cout<<"Stack 2 : ";

    stack<int> stack2;
    stack2 = stack1;
    // copying constructor is used here to push values from one stack to other
    while(!stack2.empty())
    {
        cout<<stack2.top();
        stack2.pop();
    }
    return 0;
}