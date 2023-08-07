// Write a C++ Program to Perform Simple Addition Function Using Templates

#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int intNum1 = 5, intNum2 = 10;
    double doubleNum1 = 2.5, doubleNum2 = 3.7;

    std::cout << "Adding two integers: " << add(intNum1, intNum2) << std::endl;
    std::cout << "Adding two doubles: " << add(doubleNum1, doubleNum2) << std::endl;

    return 0;
}
