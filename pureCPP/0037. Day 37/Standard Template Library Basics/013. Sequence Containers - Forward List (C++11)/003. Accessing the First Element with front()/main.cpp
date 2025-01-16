#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {10, 20, 30};

    std::cout << "First element: " << numbers.front() << "\n";

    return 0;
}
