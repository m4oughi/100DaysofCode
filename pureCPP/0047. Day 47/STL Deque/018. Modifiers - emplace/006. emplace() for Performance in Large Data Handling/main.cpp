#include <iostream>
#include <deque>
#include <chrono>

class LargeObject {
public:
    int data[1000];  // Large object to demonstrate efficiency
    LargeObject(int val) { data[0] = val; }
};

int main() {
    std::deque<LargeObject> dq;

    auto start = std::chrono::high_resolution_clock::now();
    dq.emplace(dq.begin(), 10);  // Efficient in-place construction
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken for emplace: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
              << " ns\n";

    return 0;
}
