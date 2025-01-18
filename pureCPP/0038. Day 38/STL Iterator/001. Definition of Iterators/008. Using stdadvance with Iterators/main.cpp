#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin();
    std::advance(it, 3); // Move iterator by 3 positions

    std::cout << *it << std::endl; // Output: 40
    return 0;
}
