#include <iostream>

class Counter {
    int count = 0;
public:
    int operator()() {
        return ++count;
    }
};

int main() {
    Counter counter;

    std::cout << "Call 1: " << counter() << "\n";
    std::cout << "Call 2: " << counter() << "\n";
    std::cout << "Call 3: " << counter() << "\n";
    return 0;
}
