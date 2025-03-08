#include <iostream>
#include <deque>
#include <vector>
#include <chrono>

int main() {
    std::deque<int> dq;
    std::vector<int> vec;

    int num_elements = 100000;

    // Measure push_front performance
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < num_elements; ++i) {
        dq.push_front(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Deque push_front time: "
              << std::chrono::duration<double>(end - start).count() << " seconds\n";

    // Measure push_back performance
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < num_elements; ++i) {
        vec.push_back(i);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector push_back time: "
              << std::chrono::duration<double>(end - start).count() << " seconds\n";

    return 0;
}
