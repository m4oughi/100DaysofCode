#include <iostream>
#include <set>
#include <chrono>

int main() {
    std::set<int> s;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100000; i++) s.insert(i);

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time taken to insert 100000 elements: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    return 0;
}
