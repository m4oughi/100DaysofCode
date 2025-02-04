#include <iostream>
#include <forward_list>
#include <vector>
#include <chrono>

int main() {
    std::forward_list<int> flist;
    std::vector<int> vec;

    // Measure forward_list insertion time
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        flist.push_front(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Forward List insertion time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    // Measure vector insertion time at front
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        vec.insert(vec.begin(), i);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector insertion time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
