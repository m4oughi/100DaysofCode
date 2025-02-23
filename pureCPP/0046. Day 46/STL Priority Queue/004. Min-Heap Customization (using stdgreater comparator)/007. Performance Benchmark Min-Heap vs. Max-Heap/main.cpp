#include <iostream>
#include <queue>
#include <vector>
#include <chrono>

void benchmark(const std::string& name, auto& pq) {
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 1000000; i++) {
        pq.push(i);
    }
    for (int i = 0; i < 1000000; i++) {
        pq.pop();
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << name << " Time: " 
              << std::chrono::duration<double>(end - start).count() 
              << " seconds.\n";
}

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap; // Min-Heap
    std::priority_queue<int> max_heap; // Default Max-Heap

    benchmark("Min-Heap", min_heap);
    benchmark("Max-Heap", max_heap);

    return 0;
}
