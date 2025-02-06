#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 2, 9, 1, 7};

    numbers.sort(); // Sort in ascending order

    std::cout << "Sorted List: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
