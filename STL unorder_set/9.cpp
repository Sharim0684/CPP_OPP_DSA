// Given N strings of equal lengths. The strings contain only digits (1 to 9). The task is
// to count the number of strings that have an index position such that the digit at this
// index position is greater than the digits at the same index position of all the other
// strings.
// Examples:
// Input: arr[] = {“223”, “232”, “112”}
// Output: 2
// First digit of the 1st and 2nd strings are the largest.
// Second digit of the string 2nd is the largest.
// Third digit of the string 1st is the largest.
// Input: arr[] = {“999”, “122”, “111”}
// Output: 1




// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of valid strings
int countStrings(int n, int m, string s[])
{

	// Set to store indices of valid strings
	unordered_set<int> ind;
	for (int j = 0; j < m; j++) {
		int mx = 0;

		// Find the maximum digit for current position
		for (int i = 0; i < n; i++)
			mx = max(mx, (int)s[i][j] - '0');

		// Add indices of all the strings in the set
		// that contain maximal digit
		for (int i = 0; i < n; i++)
			if (s[i][j] - '0' == mx)
				ind.insert(i);
	}

	// Return number of strings in the set
	return ind.size();
}

// Driver code
int main()
{
	string s[] = { "223", "232", "112" };
	int m = s[0].length();
	int n = sizeof(s) / sizeof(s[0]);
	cout << countStrings(n, m, s);
}


