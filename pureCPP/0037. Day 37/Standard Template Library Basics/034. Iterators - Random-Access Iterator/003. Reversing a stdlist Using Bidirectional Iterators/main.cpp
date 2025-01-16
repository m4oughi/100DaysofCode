#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    numbers.reverse(); // Reversing using the container's method

    std::cout << "Reversed list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
