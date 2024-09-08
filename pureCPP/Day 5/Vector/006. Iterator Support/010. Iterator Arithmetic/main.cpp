#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50, 60};

    auto it1 = numbers.begin();
    auto it2 = numbers.begin() + 4;

    std::cout << "Distance between it1 and it2: " << std::distance(it1, it2) << std::endl;

    it1 += 2;  // Move iterator forward by 2
    std::cout << "Element at it1 after advancing: " << *it1 << std::endl;

    it2 -= 2;  // Move iterator backward by 2
    std::cout << "Element at it2 after retreating: " << *it2 << std::endl;

    return 0;
}
