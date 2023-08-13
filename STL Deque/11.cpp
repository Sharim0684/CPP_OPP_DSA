// How to get the first and last elements of Deque in c++?


#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque = {1, 2, 3, 4, 5};

    // Get the first element using front()
    int firstElement = myDeque.front();

    // Get the last element using back()
    int lastElement = myDeque.back();

    std::cout << "First element: " << firstElement << std::endl;
    std::cout << "Last element: " << lastElement << std::endl;

    return 0;
}
