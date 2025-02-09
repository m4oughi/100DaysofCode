#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    std::cout << "Set elements in reverse order: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
