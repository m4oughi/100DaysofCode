#include <iostream>
#include <set>
#include <chrono>

int main() {
    std::set<int> s;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100000; ++i) {
        s.insert(i);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Insertion Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
