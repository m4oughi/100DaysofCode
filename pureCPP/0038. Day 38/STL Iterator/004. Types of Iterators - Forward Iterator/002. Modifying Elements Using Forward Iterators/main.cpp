#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2; // Double each value
    }

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
