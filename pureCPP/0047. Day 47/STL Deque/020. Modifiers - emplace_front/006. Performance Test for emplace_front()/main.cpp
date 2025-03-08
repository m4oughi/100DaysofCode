#include <iostream>
#include <deque>
#include <chrono>

class LargeObject {
public:
    int data[1000];  // Simulating a large object
    LargeObject(int val) { data[0] = val; }
};

int main() {
    std::deque<LargeObject> dq;
    
    auto start = std::chrono::high_resolution_clock::now();
    dq.emplace_front(10);  // Efficient in-place construction
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken for emplace_front: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
              << " ns\n";

    return 0;
}
