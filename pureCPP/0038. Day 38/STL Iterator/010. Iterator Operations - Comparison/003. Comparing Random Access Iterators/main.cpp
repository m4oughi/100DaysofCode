#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto it1 = numbers.begin();
    auto it2 = it1 + 3; // Random access

    if (it1 < it2) {
        std::cout << "it1 points to a smaller index than it2." << std::endl;
    }

    std::cout << "Distance between iterators: " << (it2 - it1) << std::endl;

    return 0;
}
