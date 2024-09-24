#include <iostream>
#include <chrono>

// Inline function for performance profiling
inline void fastOperation() {
    volatile int result = 0;
    for (int i = 0; i < 1000000; ++i) {
        result += i;
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    fastOperation();
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Time taken: " << elapsed.count() << " seconds" << std::endl;
    return 0;
}
