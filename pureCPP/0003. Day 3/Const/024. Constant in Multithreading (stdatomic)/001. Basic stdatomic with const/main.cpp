#include <iostream>
#include <atomic>

int main() {
    const std::atomic<int> atomicValue(10); // Const atomic variable

    // atomicValue cannot be modified, so attempting to do so would be an error
    std::cout << "Atomic value: " << atomicValue.load() << std::endl; // Prints 10
}
