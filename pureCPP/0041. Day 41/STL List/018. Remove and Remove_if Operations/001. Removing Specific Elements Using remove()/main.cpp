#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 2, 4, 2, 5};

    numbers.remove(2); // Removes all occurrences of 2

    std::cout << "List after removing 2: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
