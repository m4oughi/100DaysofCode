#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 2, 9, 1, 7};

    numbers.sort();    // First, sort in ascending order
    numbers.reverse(); // Then, reverse it (descending order)

    std::cout << "Sorted and Reversed List: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
