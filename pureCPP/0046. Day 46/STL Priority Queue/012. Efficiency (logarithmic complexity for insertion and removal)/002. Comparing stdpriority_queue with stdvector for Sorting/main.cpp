#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    const int N = 100000;
    std::vector<int> vec;
    std::priority_queue<int> pq;

    for (int i = 0; i < N; ++i) {
        int num = rand() % N;
        vec.push_back(num);
        pq.push(num);
    }

    auto start1 = std::chrono::high_resolution_clock::now();
    std::sort(vec.begin(), vec.end());
    auto end1 = std::chrono::high_resolution_clock::now();

    auto start2 = std::chrono::high_resolution_clock::now();
    while (!pq.empty()) {
        pq.pop();
    }
    auto end2 = std::chrono::high_resolution_clock::now();

    std::cout << "Sorting vector time: " 
              << std::chrono::duration<double>(end1 - start1).count() 
              << " seconds\n";
    std::cout << "Priority queue pop time: " 
              << std::chrono::duration<double>(end2 - start2).count() 
              << " seconds\n";

    return 0;
}
