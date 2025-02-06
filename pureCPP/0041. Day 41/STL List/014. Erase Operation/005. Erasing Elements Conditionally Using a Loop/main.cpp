#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 25, 30, 45, 50};

    for (auto it = numbers.begin(); it != numbers.end();) {
        if (*it % 10 == 0) { // If the element is a multiple of 10
            it = numbers.erase(it); // Erase element and get next valid iterator
        } else {
            ++it; // Move to next element
        }
    }

    std::cout << "List after erasing multiples of 10: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
