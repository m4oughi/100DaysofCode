#include <iostream>
#include <map>
#include <chrono>

int main() {
    std::map<int, int> numbers;

    // Insert large number of elements
    for (int i = 0; i < 1000000; i++) {
        numbers[i] = i * 10;
    }

    auto start = std::chrono::high_resolution_clock::now();
    int value = numbers[999999]; // Lookup operation
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Lookup Time: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
              << " ns\n";

    return 0;
}
