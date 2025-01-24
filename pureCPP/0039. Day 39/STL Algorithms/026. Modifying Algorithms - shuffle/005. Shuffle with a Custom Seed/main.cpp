#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::mt19937 generator(42); // Fixed seed

    std::shuffle(vec.begin(), vec.end(), generator);

    std::cout << "Shuffled vector with fixed seed: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
