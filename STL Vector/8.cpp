// Write a program to find common elements between two vectors.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vector1 { 2,4,5,9,8};
    vector<int> vector2 { 2,4,8,6,1};

    sort(vector1.begin(),vector1.end());
    sort(vector2.begin(), vector2.end());

    cout<<"vector1 is : ";
    for (int i = 0; i <vector1.size()  ; i++)
    {
        /* code */
        cout<<vector1[i]<<" ";
    }
    cout<<endl;
    cout<<"vector2 is : ";
    for (int i = 0; i < vector2.size(); i++)
    {
        /* code */
        cout<<vector2[i]<<" ";
    }
    cout<<endl;

    vector<int> v (vector1.size() + vector2.size());

    vector<int> :: iterator it ,st;
    it  = set_intersection(vector1.begin(),vector1.end(), vector2.begin(),vector2.end(),v.begin());

    cout<<"common element is : ";

    for (auto st = v.begin(); st != it ; ++st)
    {
        cout<<*st<<" ";
    }
    
    return 0;
}