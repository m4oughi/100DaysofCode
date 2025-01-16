#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
