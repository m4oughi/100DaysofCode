#include <iostream>
#include <queue>
#include <vector>
#include <chrono>

int main() {
    std::priority_queue<int> pq;
    const int N = 500000; // Half a million elements

    auto start = std::chrono::high_resolution_clock::now();
    
    for (int i = 0; i < N; ++i) {
        pq.push(rand() % N);
    }

    while (!pq.empty()) {
        pq.pop();
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Total processing time: " 
              << std::chrono::duration<double>(end - start).count() 
              << " seconds\n";

    return 0;
}
