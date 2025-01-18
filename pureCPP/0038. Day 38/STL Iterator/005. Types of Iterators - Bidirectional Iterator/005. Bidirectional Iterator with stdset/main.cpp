#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 10, 15, 20};

    std::cout << "Forward iteration through set: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nBackward iteration through set: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
