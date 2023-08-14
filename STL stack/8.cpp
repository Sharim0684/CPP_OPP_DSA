// . Create a stack of int type and sort it in descending order

#include<bits/stdc++.h>
using namespace std;

stack<int> sortstack (stack<int> &input)
{
    stack<int>tempstack;

    while (!input.empty())
    {
        int temp = input.top();
        input.pop();


        while (!tempstack.empty() && tempstack.top() > temp )
        {
            input.push ( tempstack.top());
            tempstack.pop();
        }
        tempstack.push(temp);
    }
    return tempstack;
}

int main()
{
    stack<int>input;
    input.push(34);
    input.push(3);
    input.push(23);
    input.push(55);

    stack<int>tempstack   = sortstack(input);

    cout<<"decending sort is : ";


    while (!tempstack.empty())
    {
      cout<<tempstack.top()<<" ";
      tempstack.pop();
    }
    return 0;
}