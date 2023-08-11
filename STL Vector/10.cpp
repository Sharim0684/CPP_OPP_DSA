#include <iostream>

#include <vector>

#include <algorithm>
using namespace std;

int main()

{

    vector<int> v = { 4, 7, 5, 2, 6, 9 };

    int key = 6;


    if (count(v.begin(), v.end(), key)) {

        cout << "Element found";

    }

    else {

        cout << "Element not found";

    }


    return 0;
} 