#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {100, 200, 300, 400, 500};

    std::cout << "First element: " << numbers.front() << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    return 0;
}
