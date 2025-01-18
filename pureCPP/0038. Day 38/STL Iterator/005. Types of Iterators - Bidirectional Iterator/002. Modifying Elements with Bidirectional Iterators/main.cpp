#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2; // Double each element
    }

    std::cout << "Modified list: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
