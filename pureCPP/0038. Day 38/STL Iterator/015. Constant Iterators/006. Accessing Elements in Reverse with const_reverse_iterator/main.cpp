#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "Container elements in reverse using const_reverse_iterator: ";
    for (std::vector<int>::const_reverse_iterator it = numbers.crbegin(); it != numbers.crend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
