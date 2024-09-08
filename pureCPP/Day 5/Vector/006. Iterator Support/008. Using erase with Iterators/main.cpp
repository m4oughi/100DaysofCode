#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {100, 200, 300, 400, 500};

    auto it = numbers.begin() + 2;
    numbers.erase(it);  // Remove the 3rd element

    std::cout << "Elements after erasing:" << std::endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
