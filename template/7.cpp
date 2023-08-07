// Write a C++ Program of Templated class derived from Non-templated class.


#include <iostream>

// Non-templated base class
class Base {
public:
    Base(int value) : data(value) {}
    void display() {
        std::cout << "Base Class: " << data << std::endl;
    }
private:
    int data;
};

// Templated derived class
template <typename T>
class Derived : public Base {
public:
    Derived(int value, T additionalValue) : Base(value), extraData(additionalValue) {}
    void display() {
        Base::display();
        std::cout << "Derived Class: " << extraData << std::endl;
    }
private:
    T extraData;
};

int main() {
    Derived<double> derived(5, 3.14);
    derived.display();

    return 0;
}
