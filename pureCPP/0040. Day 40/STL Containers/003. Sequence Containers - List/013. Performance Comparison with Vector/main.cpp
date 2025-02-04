#include <iostream>
#include <list>
#include <vector>
#include <chrono>

int main() {
    std::list<int> lst;
    std::vector<int> vec;

    // Measure list insertion at front
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        lst.push_front(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "List front insertion time: "
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
