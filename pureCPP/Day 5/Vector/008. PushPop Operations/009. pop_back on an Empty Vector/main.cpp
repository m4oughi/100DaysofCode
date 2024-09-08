#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    try {
        numbers.pop_back(); // Undefined behavior, should avoid
    } catch (...) {
        std::cout << "Error: pop_back on an empty vector" << std::endl;
    }

    std::cout << "Size of vector after pop_back attempt: " << numbers.size() << std::endl;

    return 0;
}
