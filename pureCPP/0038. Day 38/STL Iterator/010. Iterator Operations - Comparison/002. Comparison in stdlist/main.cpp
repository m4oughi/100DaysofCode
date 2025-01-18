#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 10, 15, 20};

    auto it = numbers.begin();
    auto end = numbers.end();

    std::cout << "Checking iterator inequality: ";
    while (it != end) {
        std::cout << *it << " ";
        ++it;
    }

    return 0;
}
