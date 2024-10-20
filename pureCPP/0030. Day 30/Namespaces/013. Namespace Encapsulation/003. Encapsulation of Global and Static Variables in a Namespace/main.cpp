#include <iostream>

namespace Counter {
    int count = 0;         // Global variable in namespace

    void increment() {
        static int localCount = 0;  // Static variable local to the function
        count++;
        localCount++;
        std::cout << "Global count: " << count << ", Local count: " << localCount << std::endl;
    }
}

int main() {
    Counter::increment();  // Encapsulated access
    Counter::increment();
    return 0;
}
