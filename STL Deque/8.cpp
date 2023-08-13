#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Remove elements from a specified position
    
      // Remove element at index 3 (fourth element)
    d.erase(d.begin() + 3);

    // Print the deque after removing an element
    cout << "Deque after removing element at position: ";
    deque<int>::iterator x;
    for (x = d.begin(); x!=d.end();x++)
    {
        cout<<*x<<" ";
    }
    
    cout << endl;

     // End of the range (fifth element)
    d.erase(d.begin() + 1, d.begin() + 4);

    // Print the deque after removing a range of elements
    cout << "Deque after removing range of elements: ";
       for (x = d.begin(); x!=d.end();x++)
    {
        cout<<*x<<" ";
    }
    cout << endl;

    return 0;
}
