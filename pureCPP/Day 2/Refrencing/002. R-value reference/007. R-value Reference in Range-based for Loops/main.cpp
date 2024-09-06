#include <iostream>
#include <vector>

std::vector<int> createVector() {
    return {1, 2, 3};  // Temporary vector
}

int main() {
    for (int &&val : createVector()) {
        std::cout << val << std::endl;  // Efficiently iterates over temporary
    }

    return 0;
}