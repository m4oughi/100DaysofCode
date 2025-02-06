#include <iostream>
#include <list>
#include <chrono>

int main() {
    std::list<int> numbers(1000000, 1); // List with 1 million elements

    auto start = std::chrono::high_resolution_clock::now();
    numbers.clear();
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Time taken to clear list: "
              << std::chrono::duration<double, std::milli>(end - start).count()
              << " ms" << std::endl;

    return 0;
}
