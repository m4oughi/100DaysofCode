#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3};

    numbers.resize(6, 99);  // Increase size with 99
    numbers.resize(2);      // Shrink size back to 2 elements

    std::cout << "Final list: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
