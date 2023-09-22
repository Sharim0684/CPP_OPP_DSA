// Create an array and implement a search function in the array.

#include<bits/stdc++.h>
using namespace std;
int search(int a[], int n, int key )
{
   for (int i = 0; i < n ; i++)
   {
      if(a[i]==key)
      {
        return i;
      }
   }
   return -1;
}
int  main()
{
   int arr[5];
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"Enter Element in the array : ";
   for (int i = 0; i < n ; i++)
   {
      cin>>arr[i];
   }
   int key;
   cin>>key;

   cout<<search(arr,n,key);

   return 0;
}