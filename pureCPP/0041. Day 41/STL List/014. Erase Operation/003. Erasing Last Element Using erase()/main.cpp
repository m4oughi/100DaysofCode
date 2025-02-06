#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    auto it = --numbers.end(); // Iterator to the last element
    numbers.erase(it); // Erase last element

    std::cout << "List after erasing last element: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
