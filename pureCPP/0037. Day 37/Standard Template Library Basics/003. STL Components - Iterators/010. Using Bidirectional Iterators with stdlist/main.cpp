#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.begin();
    std::advance(it, 2); // Move forward by 2

    std::cout << "Third element: " << *it << std::endl;
    --it; // Move backward by 1
    std::cout << "Second element: " << *it << std::endl;

    return 0;
}
