#include <iostream>
#include <vector>

void modifyVector(std::vector<int> vec) {
    vec.push_back(100);
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    modifyVector(numbers);
    std::cout << "Size of original vector: " << numbers.size() << std::endl;  // Original vector remains unchanged
    return 0;
}
