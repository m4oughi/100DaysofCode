#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    auto it1 = numbers.begin();
    auto it2 = numbers.end();

    while (it1 != it2) {
        std::cout << *it1 << " ";
        ++it1;
    }

    // Note: No arithmetic like `it1 + 1` or `it2 - 1` is allowed with input iterators.

    return 0;
}
