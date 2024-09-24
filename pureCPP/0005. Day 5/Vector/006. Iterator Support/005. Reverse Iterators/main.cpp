#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25};

    std::cout << "Elements in reverse order using reverse iterators:" << std::endl;
    for (std::vector<int>::reverse_iterator rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " ";
    }

    return 0;
}
