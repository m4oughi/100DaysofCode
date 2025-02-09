#include <iostream>
#include <unordered_set>

struct CustomHash {
    size_t operator()(int x) const {
        return x % 10;  // Custom hash function based on last digit
    }
};

int main() {
    std::unordered_set<int, CustomHash> us = {10, 20, 25, 35, 45};

    std::cout << "Unordered Set elements: ";
    for (int num : us) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
