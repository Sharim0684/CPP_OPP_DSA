// Given two integers L, R, and an integer K, the task is to print all the pairs of Prime
// Numbers from the given range whose difference is K using unordered_map.
// Example:
// Input: L = 1, R = 19, K = 6
// Output: (5, 11) (7, 13) (11, 17) (13, 19)
// Explanation: The pairs of prime numbers with difference 6 are (5, 11), (7, 13), (11,
// 17), and (13, 19).

 // C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to generate prime numbers
// in the given range [L, R]
void findPrimeNos(int L, int R,unordered_map<int,int>& M)
{
	// Store all value in the range
	for (int i = L; i <= R; i++) {
		M[i]++;
	}

	// Erase 1 as its non-prime
	if (M.find(1) != M.end()) {
		M.erase(1);
	}

	// Perform Sieve of Eratosthenes
	for (int i = 2; i <= sqrt(R); i++) {

		int multiple = 2;

		while ((i * multiple) <= R) {

			// Find current multiple
			if (M.find(i * multiple)
				!= M.end()) {

				// Erase as it is a
				// non-prime
				M.erase(i * multiple);
			}

			// Increment multiple
			multiple++;
		}
	}
}

// Function to print all the prime pairs
// in the given range that differs by K
void getPrimePairs(int L, int R, int K)
{
	unordered_map<int, int> M;

	// Generate all prime number
	findPrimeNos(L, R, M);

	// Traverse the Map M
	for (auto& it : M) {

		// If it.first & (it.first + K)
		// is prime then print this pair
		if (M.find(it.first + K)
			!= M.end()) {
			cout << "(" << it.first
				<< ", "
				<< it.first + K
				<< ") ";
		}
	}
}

// Driver Code
int main()
{
	// Given range
	int L = 1, R = 19;

	// Given K
	int K = 6;

	// Function Call
	getPrimePairs(L, R, K);

	return 0;
}
