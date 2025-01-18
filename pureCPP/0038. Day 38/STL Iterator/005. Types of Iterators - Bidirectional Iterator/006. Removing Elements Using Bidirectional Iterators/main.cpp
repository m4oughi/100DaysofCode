#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it % 2 == 0) { // Remove even numbers
            it = numbers.erase(it); // `erase` returns the next iterator
        } else {
            ++it;
        }
    }

    std::cout << "List after removing even numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
