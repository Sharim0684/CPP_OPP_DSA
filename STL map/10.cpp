#include<bits/stdc++.h>
using namespace std;
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if the number N
// can be represented as a difference
// between two perfect cubes or not
void differenceOfTwoPerfectCubes(int N)
{
	// Stores the perfect cubes
	// of first X natural numbers
	map<int, int> cubes;

	for (int i = 1;
		(i * i * i) - ((i - 1) * (i - 1) * (i - 1)) <= N;
		i++) {

		cubes[i * i * i] = 1;
	}

	map<int, int>::iterator itr;

	// Traverse the map
	for (itr = cubes.begin(); itr != cubes.end(); itr++) {

		// Stores the first number
		int firstNumber = itr->first;

		// Stores the second number
		int secondNumber = N + itr->first;

		// Search the pair for the second
		// number to obtain difference N
		// from the Map
		if (cubes.find(secondNumber) != cubes.end()) {
			cout << "Yes";
			return;
		}
	}

	// If N cannot be represented
	// as difference between two
	// positive perfect cubes
	cout << "No";
}

// Driver Code
int main()
{
	int N = 124;
	differenceOfTwoPerfectCubes(N);

	return 0;
}
