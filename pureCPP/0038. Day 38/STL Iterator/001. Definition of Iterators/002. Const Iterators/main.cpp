#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    // Const iterator
    std::vector<int>::const_iterator it;
    for (it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " ";
        // *it = 50; // Error: cannot modify the value
    }
    return 0;
}
