#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin();
    it += 2; // Move iterator forward by 2
    std::cout << *it << std::endl; // Output: 30

    it -= 1; // Move iterator backward by 1
    std::cout << *it << std::endl; // Output: 20

    return 0;
}
