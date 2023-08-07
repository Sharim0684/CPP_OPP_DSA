#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& value) {
        elements.push_back(value);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    T top() const {
        if (!elements.empty()) {
            return elements.back();
        } else {
            throw std::runtime_error("Stack is empty. Cannot retrieve top element.");
        }
    }

    bool empty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    Stack<double> doubleStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    doubleStack.push(3.14);
    doubleStack.push(1.618);

    std::cout << "Top element of intStack: " << intStack.top() << std::endl;
    std::cout << "Top element of doubleStack: " << doubleStack.top() << std::endl;

    intStack.pop();

    if (!intStack.empty()) {
        std::cout << "After popping, top element of intStack: " << intStack.top() << std::endl;
    }

    return 0;
}
