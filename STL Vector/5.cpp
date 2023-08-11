// Find largest and smallest elements in a vector

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()

{
    vector<int>v {3,4,1,8,5};
    cout<<"Element in the vector are : ";
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"min Element : "<<*min_element(v.begin() , v.end())<<endl;
    cout<<"max Element : "<<*max_element(v.begin(),v.end());

    return 0;
    
    
}
