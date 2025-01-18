#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin();
    std::cout << "Third element: " << *(it + 2) << std::endl;

    std::cout << "Iterating in reverse: ";
    for (auto rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " ";
    }

    return 0;
}
