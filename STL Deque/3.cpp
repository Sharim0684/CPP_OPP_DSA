#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque = {1, 2, 3, 4, 5};

    // Get a reverse iterator pointing to the reverse end
    std::deque<int>::reverse_iterator reverseEndIt = myDeque.rend();

    // Print the value at the reverse end (before beginning) using the reverse iterator
    std::cout << "Value at reverse end (before beginning): " << *(reverseEndIt - 1) << std::endl;

    return 0;
}
