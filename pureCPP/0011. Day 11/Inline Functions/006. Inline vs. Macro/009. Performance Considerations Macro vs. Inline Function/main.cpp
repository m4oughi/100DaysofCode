#include <iostream>
#include <chrono>

// Macro for a simple increment
#define INCREMENT_MACRO(x) ((x) + 1)

// Inline function for a simple increment
inline int incrementInline(int x) {
    return x + 1;
}

int main() {
    int value = 0;

    // Measure performance of macro
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        value = INCREMENT_MACRO(value);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Macro Time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " µs\n";

    value = 0;

    // Measure performance of inline function
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        value = incrementInline(value);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Inline Function Time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " µs\n";

    return 0;
}
