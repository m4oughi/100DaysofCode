#include <iostream>
#include <list>
#include <functional>

int main() {
    std::list<int> numbers = {3, 1, 4, 1, 5, 9};

    numbers.sort(std::greater<int>()); // Use a custom comparator for descending order

    std::cout << "List sorted in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
