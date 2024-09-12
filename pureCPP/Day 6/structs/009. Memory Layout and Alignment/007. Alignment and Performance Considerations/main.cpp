#include <iostream>
#include <chrono>

struct Unaligned {
    char a;
    int b;
};

struct Aligned {
    char a;
    alignas(8) int b;
};

int main() {
    Unaligned u[1000];
    Aligned a[1000];

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000; ++i) {
        u[i].b = i;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for unaligned: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() 
              << " ns" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000; ++i) {
        a[i].b = i;
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for aligned: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() 
              << " ns" << std::endl;
}
