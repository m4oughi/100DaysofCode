#include <iostream>
#include <queue>
#include <vector>
#include <deque>
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
    std::priority_queue<int, std::vector<int>> pq_vector;
    std::priority_queue<int, std::deque<int>> pq_deque;

    benchmark("std::vector", pq_vector);
    benchmark("std::deque", pq_deque);

    return 0;
}
