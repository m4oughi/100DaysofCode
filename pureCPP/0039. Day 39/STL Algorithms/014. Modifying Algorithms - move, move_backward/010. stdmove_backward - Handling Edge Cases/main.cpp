#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4};
    std::vector<int> destination(2);

    // Partial backward move
    std::move_backward(source.begin() + 2, source.end(), destination.end());

    std::cout << "Destination vector: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
