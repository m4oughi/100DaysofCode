#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it1 = numbers.begin();
    auto it2 = numbers.begin() + 3;

    std::cout << "Distance between iterators: " << (it2 - it1) << std::endl;
    std::cout << "Is it1 less than it2? " << (it1 < it2) << std::endl;

    return 0;
}
