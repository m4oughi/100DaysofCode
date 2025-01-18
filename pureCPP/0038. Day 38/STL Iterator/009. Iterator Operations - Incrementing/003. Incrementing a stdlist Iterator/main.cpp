#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    std::cout << "Incrementing list iterator: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
