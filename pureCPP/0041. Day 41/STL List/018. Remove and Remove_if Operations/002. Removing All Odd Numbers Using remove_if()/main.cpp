#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    numbers.remove_if([](int num) { return num % 2 != 0; }); // Remove odd numbers

    std::cout << "List after removing odd numbers: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
