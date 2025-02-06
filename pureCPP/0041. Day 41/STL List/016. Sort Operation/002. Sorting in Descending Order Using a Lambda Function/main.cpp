#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 3, 8, 1, 6};

    numbers.sort([](int a, int b) { return a > b; }); // Descending order

    std::cout << "Sorted List (Descending): ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
