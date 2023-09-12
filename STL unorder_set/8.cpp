// Find all matrix elements which are minimum in their row and maximum in their
// column

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Functionto find all the matrix elements
// which are minimum in its row and maximum
// in its column
vector<int> minmaxNumbers(vector<vector<int> >& matrix,
						vector<int>& res)
{

	// Initialize unordered set
	unordered_set<int> set;

	// Traverse the matrix
	for (int i = 0; i < matrix.size(); i++) {
		int minr = INT_MAX;
		for (int j = 0; j < matrix[i].size(); j++) {

			// Update the minimum
			// element of current row
			minr = min(minr, matrix[i][j]);
		}

		// Insert the minimum
		// element of the row
		set.insert(minr);
	}

	for (int j = 0; j < matrix[0].size(); j++) {
		int maxc = INT_MIN;

		for (int i = 0; i < matrix.size(); i++) {

			// Update the maximum
			// element of current column
			maxc = max(maxc, matrix[i][j]);
		}

		// Checking if it is already present
		// in the unordered_set or not
		if (set.find(maxc) != set.end()) {
			res.push_back(maxc);
		}
	}

	return res;
}

// Driver Code
int main()
{
	vector<vector<int> > mat
		= { { 1, 10, 4 },
			{ 9, 3, 8 },
			{ 15, 16, 17 } };

	vector<int> ans;

	// Function call
	minmaxNumbers(mat, ans);

	// If no such matrix
	// element is found
	if (ans.size() == 0)
		cout << "-1" << endl;

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;

	return 0;
}
