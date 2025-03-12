#include <iostream>
#include <vector>
#include <chrono>

struct LargeData {
    std::vector<int> data;
    LargeData() { data.resize(1000000, 1); }
};

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    std::vector<LargeData> vec;
    vec.push_back(LargeData()); // Uses move semantics

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Execution time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << "ms\n";

    return 0;
}
