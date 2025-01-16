#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int>::const_iterator it;

    for (it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " "; // Read-only access
    }
    return 0;
}
