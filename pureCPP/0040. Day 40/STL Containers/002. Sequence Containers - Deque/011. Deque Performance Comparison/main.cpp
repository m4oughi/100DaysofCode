#include <iostream>
#include <deque>
#include <vector>
#include <chrono>

int main() {
    std::deque<int> dq;
    std::vector<int> vec;

    // Measure deque insertion at front
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        dq.push_front(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Deque front insertion time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    // Measure vector insertion at front
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        vec.insert(vec.begin(), i);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector front insertion time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
