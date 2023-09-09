// Unlike a set, a multiset may contain multiple occurrences of same number. The
// multiset equivalence problem states to check if two given multisets are equal or not.
// For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 occurs
// twice in B), whereas A and B are both multisets. More formally, “Are the sets of pairs
// defined as \(A' = \{ (a, frequency(a)) | a \in \mathbf{A} \}\) equal for the two given
// multisets?” Given two multisets A and B, write a program to check if the two multisets
// are equal.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s, s1;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    s1 == s;

    cout << (s1 == s) << endl;

    s1.insert(1);

    cout << (s1 == s);

    return 0;
}