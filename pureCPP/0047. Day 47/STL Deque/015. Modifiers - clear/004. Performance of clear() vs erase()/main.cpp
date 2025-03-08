#include <iostream>
#include <deque>
#include <chrono>

int main() {
    std::deque<int> dq(1000000, 5);  // Large deque with 1 million elements

    auto start1 = std::chrono::high_resolution_clock::now();
    dq.clear();
    auto end1 = std::chrono::high_resolution_clock::now();
    std::cout << "Time taken by clear(): " 
              << std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count()
              << " microseconds\n";

    // Refilling the deque
    dq.assign(1000000, 5);

    auto start2 = std::chrono::high_resolution_clock::now();
    dq.erase(dq.begin(), dq.end());  // Using erase() to remove all elements
    auto end2 = std::chrono::high_resolution_clock::now();
    std::cout << "Time taken by erase(): " 
              << std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count()
              << " microseconds\n";

    return 0;
}
