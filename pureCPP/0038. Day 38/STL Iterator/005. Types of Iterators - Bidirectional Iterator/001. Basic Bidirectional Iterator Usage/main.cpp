#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    // Forward iteration
    std::cout << "Forward iteration: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    // Backward iteration
    std::cout << "\nBackward iteration: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
