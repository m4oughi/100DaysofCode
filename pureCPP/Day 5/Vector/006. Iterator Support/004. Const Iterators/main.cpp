#include <iostream>
#include <vector>

int main() {
    const std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Elements using const iterators:" << std::endl;
    for (std::vector<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
