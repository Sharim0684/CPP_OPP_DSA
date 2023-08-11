// Write a program to Copy one vector’s elements to another vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int>v{1,2,3,4};
    vector<int>v2;

    v2 = v;
    cout<<"old vector is :";
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"new  vector is :";
    for (int i = 0; i < v2.size(); i++)
    {
       
        cout<<v2[i]<<" ";
    }
     
    return 0;

}