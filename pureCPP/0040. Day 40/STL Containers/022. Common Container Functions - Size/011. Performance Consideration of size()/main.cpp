#include <iostream>
#include <list>
#include <vector>
#include <chrono>

int main() {
    // Measure time to get size of a vector
    std::vector<int> vec(1000000, 1);  // 1 million elements
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Size of vector: " << vec.size() << std::endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for vector size: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " ns" << std::endl;

    // Measure time to get size of a list
    std::list<int> myList(1000000, 1);  // 1 million elements
    start = std::chrono::high_resolution_clock::now();
    std::cout << "Size of list: " << myList.size() << std::endl;
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for list size: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " ns" << std::endl;

    return 0;
}
