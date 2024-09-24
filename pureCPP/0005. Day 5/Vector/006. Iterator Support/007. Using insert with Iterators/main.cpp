#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 50, 60};

    auto it = numbers.begin() + 3;
    numbers.insert(it, 40);  // Insert 40 at the 4th position

    std::cout << "Elements after insertion:" << std::endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
