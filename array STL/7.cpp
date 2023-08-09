//  Sort an array in ascending order using sort() function in C++ STL

#include <iostream>
#include <array>
#include <tuple>
#include<algorithm>
using namespace std;
int main()
{
    // array<int ,5 > ar = { 3,6,1,8,5};
    int arr[5] = {9,1,5,2,4};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "array before sort :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
    sort(arr, arr + 5);
    cout<<"array after sort :";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
    return 0;
}