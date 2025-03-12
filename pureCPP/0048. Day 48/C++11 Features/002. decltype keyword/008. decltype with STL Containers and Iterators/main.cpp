#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    decltype(numbers.begin()) it = numbers.begin(); // Deduces std::vector<int>::iterator
    std::cout << "First element: " << *it << std::endl;

    return 0;
}
