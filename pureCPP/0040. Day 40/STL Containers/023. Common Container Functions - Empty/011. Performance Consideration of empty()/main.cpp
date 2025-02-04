#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    // Measure time to check if a vector is empty
    std::vector<int> vec(1000000, 1);  // 1 million elements
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Vector empty: " << vec.empty() << std::endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for vector empty check: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " ns" << std::endl;

    // Measure time to check if a list is empty
    std::list<int> myList(1000000, 1);  // 1 million elements
    start = std::chrono::high_resolution_clock::now();
    std::cout << "List empty: " << myList.empty() << std::endl;
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for list empty check: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << " ns" << std::endl;

    return 0;
}
