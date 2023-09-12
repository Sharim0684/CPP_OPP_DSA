// Count of distinct pair sums in a given Array arr[] of size N, the task is to find the total
// number of unique pair sums possible from the array elements.

#include<bits/stdc++.h>
using namespace std;
int cntDisPair(vector<int> arr, int target)
{
    unordered_set<int> seen;
    unordered_set<int> set;

    int count=0;
    for(int num: arr)
    {
        if(set.find(target-num) != set.end() && seen.find(num) == seen.end())
        {
            count++;
            seen.insert(num);
            seen.insert(target-num);
        }
        set.insert(num);
    }
    return count;
}
int main()
{
    vector<int> arr={1,5,1,5};
    int k =6;
    cout<<cntDisPair(arr,k);



}