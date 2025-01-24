#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {10, 20, 30, 40, 50};
    std::vector<int> destination(7, 0); // Two extra spaces at the front

    std::copy_backward(source.begin(), source.end(), destination.end() - 2);

    std::cout << "Destination vector with gaps: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
