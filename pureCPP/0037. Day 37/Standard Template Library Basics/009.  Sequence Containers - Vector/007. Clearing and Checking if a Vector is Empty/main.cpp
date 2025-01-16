#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    numbers.clear();

    if (numbers.empty()) {
        std::cout << "Vector is empty.\n";
    } else {
        std::cout << "Vector is not empty.\n";
    }
    return 0;
}
