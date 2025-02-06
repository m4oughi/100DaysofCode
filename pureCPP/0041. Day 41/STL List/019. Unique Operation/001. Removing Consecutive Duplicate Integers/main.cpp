#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 1, 2, 2, 3, 3, 4, 4, 5};

    numbers.unique(); // Removes consecutive duplicates

    std::cout << "List after unique operation: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
