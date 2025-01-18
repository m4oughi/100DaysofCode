#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 10, 15, 20};

    for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        *it += 3; // Add 3 to each element
    }

    std::cout << "Modified list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
