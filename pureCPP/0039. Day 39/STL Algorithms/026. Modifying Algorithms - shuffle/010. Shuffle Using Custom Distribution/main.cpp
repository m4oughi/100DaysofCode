#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, vec.size() - 1);

    for (size_t i = 0; i < vec.size(); ++i) {
        std::swap(vec[i], vec[distribution(generator)]);
    }

    std::cout << "Shuffled vector with custom distribution: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
