// Create a function in Array to sort the given array


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of array: "; cin>>n;
    
    int a[n];
    
    cout<<"\nEnter the elements: ";
    for(int i=0; i<n; i++) cin>>a[i];
      
      
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    cout<<"\nArray after swapping: ";
   
    for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
      
    return 0;
}



// // C++ program to sort Array
// // using sort() in STL

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// 	// Get the array
// 	int arr[] = { 1, 45, 54, 71, 76, 12 };

// 	// Find the size of the array
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Print the array
// 	cout << "Array: ";
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;

// 	// Sort the array
// 	sort(arr, arr + n);

// 	// Print the sorted array
// 	cout << "Sorted Array: ";
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;

// 	return 0;
// }
