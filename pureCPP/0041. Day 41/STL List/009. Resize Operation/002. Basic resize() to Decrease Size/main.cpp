#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    numbers.resize(3);  // Shrinks to first 3 elements

    std::cout << "List after resizing: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
