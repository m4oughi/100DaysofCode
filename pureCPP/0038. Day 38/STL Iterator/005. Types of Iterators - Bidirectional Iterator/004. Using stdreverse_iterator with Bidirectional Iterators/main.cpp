#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Reverse iteration using reverse_iterator: ";
    std::reverse_iterator<std::vector<int>::iterator> rit(numbers.end());
    for (; rit != numbers.rend(); ++rit) {
        std::cout << *rit << " ";
    }

    return 0;
}
