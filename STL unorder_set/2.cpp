#include<bits/stdc++.h>
using namespace std;
void printalltriplets(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            int diff = arr[j] - arr[i];
            if(s.find(arr[i]-diff) != s.end())
            cout<<arr[i] - diff<< " "<<arr[i]<<" "<<arr[i]<<endl;
        }
        s.insert(arr[i]);     
    }
    
}
int main()
{
    int arr[]={2,6,9,12,17,22,31,32,35,42};
    int n = sizeof(arr)/sizeof(arr[0]);
    printalltriplets(arr,n);
    return 0;
}