#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 2, 3, 4, 4, 5, 5};

    numbers.sort(); // Sort the list before using unique()
    numbers.unique(); // Remove consecutive duplicates

    std::cout << "List after removing duplicates: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
