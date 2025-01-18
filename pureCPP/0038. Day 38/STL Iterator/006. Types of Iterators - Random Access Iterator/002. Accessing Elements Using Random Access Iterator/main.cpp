#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin(); // Random access iterator
    std::cout << "Element at index 2: " << *(it + 2) << std::endl;

    return 0;
}
