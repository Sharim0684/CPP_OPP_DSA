//  Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
// is to print the new string without ‘#‘. String after processing backspace characters
// using deque
// Examples:
// Input : S = "abc#de#f#ghi#jklmn#op#"
// Output : abdghjklmo


// CPP implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find new final String
string newString(string S)
{
	deque<char> q;

	for (int i = 0; i < S.length(); ++i) {

		if (S[i] != '#')
			q.push_back(S[i]);
		else if (!q.empty())
			q.pop_back();
	}

	// build final string
	string ans = "";

	while (!q.empty()) {
		ans += q.front();
		q.pop_front();
	}

	// return final string
	return ans;
}

// Driver program
int main()
{
	string S = "abc#de#f#ghi#jklmn#op#";

	// function call to print required answer
	cout << newString(S);

	return 0;
}

// This code is contributed by Sanjit_Prasad
