#include <iostream>
#include <deque>
#include <vector>
#include <chrono>

int main() {
    std::deque<int> dq;
    std::vector<int> vec;
    int num_elements = 100000;

    // Insert elements
    for (int i = 0; i < num_elements; ++i) {
        dq.push_back(i);
        vec.push_back(i);
    }

    // Measure pop_back performance for deque
    auto start = std::chrono::high_resolution_clock::now();
    while (!dq.empty()) dq.pop_back();
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Deque pop_back time: "
              << std::chrono::duration<double>(end - start).count() << " seconds\n";

    // Measure pop_back performance for vector
    start = std::chrono::high_resolution_clock::now();
    while (!vec.empty()) vec.pop_back();
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector pop_back time: "
              << std::chrono::duration<double>(end - start).count() << " seconds\n";

    return 0;
}
