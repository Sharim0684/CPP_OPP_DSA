#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector < int > v {2,5,1,9,6};

    cout<<"Element  in the vector is  : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    sort(v.begin(), v.end());
    cout<<endl;
    cout<<"Sort Element is : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}