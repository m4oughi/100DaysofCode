#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "Reverse iterator using reverse_iterator: ";
    for (std::reverse_iterator<std::vector<int>::iterator> rit(numbers.end()); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " ";
    }

    return 0;
}
