#include <iostream>
#include <deque>
#include <chrono>

int main() {
    std::deque<int> dq;
    
    // Insert 1,000,000 elements
    for (int i = 0; i < 1000000; ++i) dq.push_back(i);

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Deque size: " << dq.size() << "\n";
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken to get size: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() 
              << " ns\n";

    return 0;
}
