#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    // Using iterator to traverse
    std::vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
