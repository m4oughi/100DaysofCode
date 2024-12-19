#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data(10, 1);  // Initialize vector with 10 elements, all set to 1

    // Sequential execution
    std::for_each(std::execution::seq, data.begin(), data.end(), [](int& n) {
        n += 1;
    });

    // Parallel execution
    std::for_each(std::execution::par, data.begin(), data.end(), [](int& n) {
        n *= 2;
    });

    std::cout << "Data after sequential and parallel for_each: ";
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
