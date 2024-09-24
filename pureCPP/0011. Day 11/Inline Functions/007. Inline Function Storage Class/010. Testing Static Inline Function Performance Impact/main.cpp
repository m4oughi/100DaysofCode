#include <iostream>
#include <chrono>

// Static inline function for simple arithmetic operation
inline static int addStatic(int a, int b) {
    return a + b;
}

// Regular inline function for simple arithmetic operation
inline int addRegular(int a, int b) {
    return a + b;
}

int main() {
    int result = 0;

    // Measure performance of static inline function
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        result += addStatic(i, i + 1);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Static Inline Function Time: " 
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() 
              << " µs" << std::endl;

    result = 0;

    // Measure performance of regular inline function
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        result += addRegular(i, i + 1);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Regular Inline Function Time: " 
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() 
              << " µs" << std::endl;

    return 0;
}
