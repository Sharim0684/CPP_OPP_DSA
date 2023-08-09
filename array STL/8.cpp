// Sort an array in descending order using sort() function in C++ STL

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 1, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "array before sort ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr , arr+n ,greater<int>());

    cout << " decending array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}