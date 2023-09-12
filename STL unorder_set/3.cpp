// C++ Program for Number of unique triplets whose XOR is zero.
// Input : a[] = {1, 3, 5, 10, 14, 15};
// Output : 2
// Explanation : {1, 14, 15} and {5, 10, 15} are the
// unique triplets whose XOR is 0.
// {1, 14, 15} and all other combinations of
// 1, 14, 15 are considered as 1 only.
// Input : a[] = {4, 7, 5, 8, 3, 9};
// Output : 1
// Explanation : {4, 7, 3} is the only triplet whose XOR is 0



#include<bits/stdc++.h>
using namespace std;
void counttriplet(int a[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n ; i++)
    {
        s.insert(a[i]);
    }
    int count = 0 ;
    for (int i = 1; i < n-1 ; i++)
    {
        for (int j = i+1; i < n ; j++)
        {
            int xr = a[i]^a[j];

            if(s.find(xr) != s.end() && xr != a[i] && xr != a[j] )
            count++;
        }
        
    }
    return count / 3 ;
}
int main()
{
    int a[]={1, 3, 5, 10, 14, 15};
    int n = sizeof(a)/sizeof(a[0]);
counttriplet(a,n);
return 0;
}