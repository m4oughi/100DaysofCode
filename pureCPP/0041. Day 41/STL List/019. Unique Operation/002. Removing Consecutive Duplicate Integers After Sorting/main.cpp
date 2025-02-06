#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 2, 2, 4, 1, 5, 4};

    numbers.sort(); // Sorting before using unique()
    numbers.unique();

    std::cout << "List after sorting and applying unique: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
