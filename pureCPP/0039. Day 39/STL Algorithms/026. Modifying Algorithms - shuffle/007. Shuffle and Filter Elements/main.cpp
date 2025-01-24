#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(vec.begin(), vec.end(), generator);

    std::cout << "Shuffled vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }

    std::cout << "\nFiltered (odd numbers): ";
    for (int num : vec) {
        if (num % 2 != 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
