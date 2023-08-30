// Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
// merge them in a sorted manner using priority_queue.
// Example:
// Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
// Output: 4 5 6 7 8 8



#include<bits/stdc++.h>
using namespace std;

int merge(int A[],int B[], int N , int M)
{
    int res[N+M];
    priority_queue<int,vector<int> , greater<int>> q;

    for (int i = 0; i < N ; i++)
    q.push(A[i]);

    for (int i = 0; i < M ; i++)
    q.push(B[i]);

int j=0;
    while (!q.empty())
    {
        res[j++]=q.top();
        q.pop();
    }
    for (int i = 0; i < N + M ; i++)
    
        cout<<res[i]<<" ";
    
    
        
}
int main()
{
    int A[]={2,3,4,5};
    int B[]={6,7,8,9};
    int N = sizeof(A)/sizeof(A[0]);
    int M = sizeof(B)/sizeof(B[0]);

    merge(A,B,N,M);

    return 0;
}