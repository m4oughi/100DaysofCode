#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    auto it = numbers.end(); // Start at the end of the list
    while (it != numbers.begin()) {
        --it; // Move backward
        if (*it % 2 == 0) {
            it = numbers.erase(it); // Erase even numbers
        }
    }

    std::cout << "After removing evens: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
