//  Given three arrays X[], Y[], and Z[] each consisting of N integers, the task is to find
// the maximum number of triplets (X[i], Y[i], Z[i]) such that (X[i] < Y[i] < Z[i]) for any
// permutation of the three arrays using priority_queue
// Input: X = {9, 6, 14, 1, 8}, Y = {2, 10, 3, 12, 11}, Z = {15, 13, 5, 7, 4}
// Output: 3
// Explanation:
// After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11}, and
// {4, 7, 15, 13, 5} respectively. The increasing triplets are {1, 3, 4}, {8, 10, 15} and {9,
// 12, 13}.
// Therefore, the total count of such triplets is 3.


#include<bits/stdc++.h>

using namespace std;
int counttriplet(int arr1[],int arr2[], int arr3[], int N);
{
    sort(arr1 , arr1+N);

    priority_queue<int,vector<int>,greater<int>> Y;
    priority_queue<int,vector<int>,greater<int>> Z;

    for (int i = 0; i < N ; i++)
    {
     Y.push(arr2[i]);
    }

    for(int i=0;i<N;i++)
    {
     Z.push(arr3[i]);
    }
    int x,y,z;
    int ans=0;
    for(int i=0; i < N ; i++)
    {
        x = arr1[i];

        while (!Y.empty()&& Y.top() <= x)
        Y.pop();

        if(Y.empty())
        break;
        
        y=Y.top();
        Y.pop();


        while(!Z.empty() && Z.top() <=y)
        Z.pop();

        if(Z.empty())
        break;
        
        z=Z.top();
        z.pop();

        ++ans;

    }
    return ans ;

    
}

int main()
{
    int X[]={9,6,14,1,8};
    int Y[]={2,10,3,12,11};
    int Z[]={15,13,5,7,4};
    int N= sizeof(X)/sizeof(X[0]);

    cout<<counttriplet(X,Y,Z,N);

    return 0;
}