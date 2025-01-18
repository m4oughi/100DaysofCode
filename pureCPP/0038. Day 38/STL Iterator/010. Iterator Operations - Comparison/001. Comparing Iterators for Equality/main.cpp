#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    auto it = numbers.begin();
    auto end = numbers.end();

    std::cout << "Iterating and checking for equality: ";
    while (it != end) { // Check inequality
        std::cout << *it << " ";
        ++it;
    }

    return 0;
}
