// C++ code to implement the approach
#include <bits/stdc++.h>
using namespace std;

// Function to merge arrays
vector<int> mergeArrays(vector<int>& a, vector<int>& b,
						int n, int m)
{
	vector<int> mergedArray;

	// Declaring a map.
	// Using map as a inbuilt tool
	// to store elements in sorted order.
	map<int, bool> mp;

	// Inserting values to a map.
	for (int i = 0; i < n; i++)
		mp[a[i]] = true;

	for (int i = 0; i < m; i++)
		mp[b[i]] = true;

	// Printing keys of the map.
	for (auto i : mp)
		mergedArray.push_back(i.first);
	return mergedArray;
}

// Function to merge maps
map<string, vector<int> >
mergeMap(map<string, vector<int> >& map1,
		map<string, vector<int> >& map2)
{
	map<string, vector<int> > map3;
	map3.insert(map1.begin(), map1.end());

	for (auto itr : map2) {
		if (map3.find(itr.first) == map3.end())
			map3.insert({ itr.first, itr.second });
		else {
			auto temp_itr = map3.find(itr.first);
			vector<int> arr = mergeArrays(
				itr.second, temp_itr->second,
				itr.second.size(),
				temp_itr->second.size());
			map3[itr.first] = arr;
		}
	}
	return map3;
}

// Driver code
int main()
{
	map<string, vector<int> > map1, map2, map3;
	map1.insert({ "key1", { 0, 1 } });
	map1.insert({ "key2", { 0, 1 } });
	map2.insert({ "key2", { 1, 2 } });

	// Function call
	map3 = mergeMap(map1, map2);

	for (auto itr : map3) {
		cout << "\"" << itr.first << "\", { ";
		for (auto x : itr.second)
			cout << x << " ";
		cout << "}\n";
	}
	return 0;
}
