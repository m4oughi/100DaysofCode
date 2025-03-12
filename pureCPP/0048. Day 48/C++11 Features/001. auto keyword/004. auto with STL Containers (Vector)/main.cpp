#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto it = numbers.begin(); // std::vector<int>::iterator
    std::cout << "First element: " << *it << std::endl;

    return 0;
}
