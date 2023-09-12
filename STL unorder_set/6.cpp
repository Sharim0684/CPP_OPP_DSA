// Given an array arr[] consisting of N positive integers, the task is to find the number of
// pairs such that the Greatest Common Divisor(GCD) of the pairs is not a prime
// number. The pair (i, j) and (j, i) are considered the same.
// Examples:
// Input: arr[] ={ 2, 3, 9}
// Output: 10
// Explanation:
// Following are the possible pairs whose GCD is not prime:
// (0, 1): The GCD of arr[0](= 2) and arr[1](= 3) is 1.
// (0, 2): The GCD of arr[0](= 2) and arr[2](= 9) is 1.
// Therefore, the total count of pairs is 2.
// Input: arr[] = {3, 5, 2, 10}
// Output: 4

// C++ Code to find pair with
// maximum GCD in an array
#include <bits/stdc++.h>

using namespace std;

// function to find GCD of pair with
// max GCD in the array
int findMaxGCD(int arr[], int n)
{
	int maxGcd = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int gcd = __gcd(arr[i], arr[j]);
			maxGcd = max(maxGcd, gcd);
		}
	}
	return maxGcd;
}


// Driver code
int main()
{
	// Array in which pair with max GCD
	// is to be found
	int arr[] = { 1, 2, 4, 8, 8, 12 };

	// Size of array
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << findMaxGCD(arr,n);
	return 0;
}
