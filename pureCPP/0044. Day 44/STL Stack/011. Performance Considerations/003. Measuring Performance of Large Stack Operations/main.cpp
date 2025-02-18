#include <iostream>
#include <stack>
#include <chrono>

int main() {
    std::stack<int> s;
    int numElements = 1000000;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        s.push(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Push Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    start = std::chrono::high_resolution_clock::now();
    while (!s.empty()) {
        s.pop();
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Pop Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
