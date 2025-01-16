#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(vec.begin(), vec.end(), g);

    std::cout << "After shuffle: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
