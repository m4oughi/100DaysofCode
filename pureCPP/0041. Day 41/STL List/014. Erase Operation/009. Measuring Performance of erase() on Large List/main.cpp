#include <iostream>
#include <list>
#include <chrono>

int main() {
    std::list<int> numbers(1000000, 5); // List with 1 million elements

    auto start = std::chrono::high_resolution_clock::now();
    numbers.erase(numbers.begin(), numbers.end()); // Erasing all elements
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken to erase all elements: "
              << std::chrono::duration<double, std::milli>(end - start).count()
              << " ms\n";

    return 0;
}
