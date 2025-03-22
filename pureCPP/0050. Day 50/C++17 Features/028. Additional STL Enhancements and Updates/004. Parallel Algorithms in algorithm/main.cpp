#include <iostream>
#include <vector>
#include <algorithm>
#include <execution> // Required for parallel algorithms

int main() {
    std::vector<int> vec = {1, 5, 3, 2, 4};

    std::sort(std::execution::par, vec.begin(), vec.end()); // Parallel sorting

    std::cout << "Sorted Vector: ";
    for (int n : vec) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
