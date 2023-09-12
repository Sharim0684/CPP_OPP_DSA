// C++ Program to given an array of positive and negative numbers, find if there is a
// subarray (of size at-least one) with 0 sum.
// Examples :
// Input: {4, 2, -3, 1, 6}
// Output: true
// Explanation:
// There is a subarray with zero sum from index 1 to 3.
// Input: {4, 2, 0, 1, 6}
// Output: true
// Explanation:
// There is a subarray with zero sum from index 2 to 2
 


 #include<bits/stdc++.h>
 using namespace std;
 bool subarray(int arr[], int n)
 {
    unordered_set<int> subset;

    int sum=0;
    for(int i=0 ; i < n ; i++)
    {
        sum = sum + arr[i];
        if( sum ==0 || subset.find(sum) != subset.end())
        return true;

        subset.insert(sum);
    }
    return false;
 }
 int main()
 {
    int arr[] ={4,2,-3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(subarray(arr,n))
    {
        cout<<"subarray with zero indexing found"<<endl;
    }
    else


    



    {
        cout<<"subarray with zero indexing not found"<<endl;
    }
    return 0;
 }