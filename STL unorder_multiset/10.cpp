// Write a C++ program to illustrate the reverse() function in unordered_multiset

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_multiset<int> j;

	// container invoked
	// it reverse the values
	j.reserve(5);

	// set the values of the container
	j.insert(5);
	j.insert(6);
	j.insert(7);

	cout << "The values in unordered_multiset :";
	for (const int& x : j)
		cout << " " << x;

	return 0;
}
