#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {10, 20, 30, 40, 50};
    std::vector<int> destination(3);

    std::copy_backward(source.begin(), source.begin() + 3, destination.end());

    std::cout << "Partially copied vector: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
