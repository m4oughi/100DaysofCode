#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Container elements using const_iterator: ";
    for (std::vector<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
