#include <iostream>
#include <deque>
#include <chrono>

int main() {
    std::deque<int> dq(1000000, 5); // 1 million elements

    auto start = std::chrono::high_resolution_clock::now();
    int val1 = dq[500000]; // Accessing with operator[]
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "operator[] time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() 
              << " ns\n";

    start = std::chrono::high_resolution_clock::now();
    int val2 = dq.at(500000); // Accessing with at()
    end = std::chrono::high_resolution_clock::now();
    std::cout << "at() time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() 
              << " ns\n";

    return 0;
}
