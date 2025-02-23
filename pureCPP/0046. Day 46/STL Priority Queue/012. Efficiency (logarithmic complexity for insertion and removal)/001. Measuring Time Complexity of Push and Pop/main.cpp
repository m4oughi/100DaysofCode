#include <iostream>
#include <queue>
#include <chrono>

int main() {
    std::priority_queue<int> pq;
    const int N = 1000000; // 1 million elements

    auto start = std::chrono::high_resolution_clock::now();
    
    // Insert elements (O(log n) each)
    for (int i = 0; i < N; ++i) {
        pq.push(i);
    }
    
    auto mid = std::chrono::high_resolution_clock::now();

    // Remove elements (O(log n) each)
    while (!pq.empty()) {
        pq.pop();
    }
    
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Insertion Time: " 
              << std::chrono::duration<double>(mid - start).count() 
              << " seconds\n";
    std::cout << "Removal Time: " 
              << std::chrono::duration<double>(end - mid).count() 
              << " seconds\n";

    return 0;
}
