// Declare a vector without initialization, insert some elements and print


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    for (int i = 0; i < 10 ; i++)
    {
       v.push_back(i*100);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}