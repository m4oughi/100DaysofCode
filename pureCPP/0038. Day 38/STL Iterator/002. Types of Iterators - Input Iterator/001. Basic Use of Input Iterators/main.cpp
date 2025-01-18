#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Input iterator
    std::vector<int>::iterator it = numbers.begin();
    while (it != numbers.end()) {
        std::cout << *it << " ";
        ++it;
    }

    return 0;
}
