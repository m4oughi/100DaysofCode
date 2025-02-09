#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 15, 25, 35};

    std::cout << "Set elements: ";
    for (std::set<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
