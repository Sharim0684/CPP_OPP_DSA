// Write a program to reverse vector elements


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{ 1,2,3,4,5};

    cout<<"Element in the vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;

    reverse(v.begin(), v.end());

    cout<<"reverse Element in the vector is : ";
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    

    return 0;
}