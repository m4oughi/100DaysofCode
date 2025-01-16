#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 10, 15};

    std::cout << "Using iterators:\n";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
