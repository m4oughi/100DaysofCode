#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    auto it = numbers.begin();

    it += 3; // Move 3 positions forward
    std::cout << "Fourth element: " << *it << std::endl;

    it -= 2; // Move 2 positions backward
    std::cout << "Second element: " << *it << std::endl;

    return 0;
}
