#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {};
    std::vector<int> destination(5, 0);

    // Copy backward (no effect as the source is empty)
    std::copy_backward(source.begin(), source.end(), destination.end());

    std::cout << "Destination vector: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
