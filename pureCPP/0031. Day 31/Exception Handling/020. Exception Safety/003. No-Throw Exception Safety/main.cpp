#include <iostream>
#include <vector>

void safeAddElement(std::vector<int>& vec, int value) noexcept {
    vec.push_back(value);  // No exceptions thrown
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    safeAddElement(numbers, 4);  // Safe operation, no exception can occur
    std::cout << "Element added successfully!" << std::endl;
    return 0;
}
