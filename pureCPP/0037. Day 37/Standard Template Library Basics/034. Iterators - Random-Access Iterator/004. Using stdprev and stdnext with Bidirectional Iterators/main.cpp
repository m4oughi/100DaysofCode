#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<int> numbers = {100, 200, 300, 400, 500};

    auto it = numbers.begin();
    std::advance(it, 2); // Move iterator to the third element (300)

    auto prevIt = std::prev(it); // Move one step backward
    auto nextIt = std::next(it); // Move one step forward

    std::cout << "Current element: " << *it << "\n";
    std::cout << "Previous element: " << *prevIt << "\n";
    std::cout << "Next element: " << *nextIt << "\n";

    return 0;
}
