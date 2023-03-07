#include <iostream>

class StaticCount {
private:
    static int count;
public:
    static void incrementCount() {
        count++;
    }
    static int getCount() {
        return count;
    }
};

int StaticCount::count = 0; // initialize static member variable

int main() {
    StaticCount::incrementCount();
    StaticCount::incrementCount();
    StaticCount::incrementCount();

    std::cout << "Static count: " << StaticCount::getCount() << std::endl;

    return 0;
}
