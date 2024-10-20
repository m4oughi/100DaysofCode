#include <iostream>

namespace {
    int counter = 0;

    void increment() {
        counter++;
        std::cout << "Counter: " << counter << std::endl;
    }
}

int main() {
    increment();  // Access within the same file
    increment();
    return 0;
}
