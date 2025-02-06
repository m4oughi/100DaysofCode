#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin(); // Get an iterator to the first element
    std::advance(it, 2); // Move iterator to the third element (30)

    numbers.erase(it); // Erase the element at iterator

    std::cout << "List after erasing an element: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
