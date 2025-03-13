#include <iostream>
#include <vector>

auto createVector() {
    return std::vector<int>{1, 2, 3, 4, 5}; // Deduces std::vector<int>
}

int main() {
    for (int num : createVector()) {
        std::cout << num << " ";
    }
    return 0;
}
