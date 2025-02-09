#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "First element: " << *numbers.begin() << std::endl;
    std::cout << "Last element: " << *numbers.rbegin() << std::endl;
    return 0;
}
