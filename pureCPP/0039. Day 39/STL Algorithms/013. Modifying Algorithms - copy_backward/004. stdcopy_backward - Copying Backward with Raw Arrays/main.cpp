#include <iostream>
#include <algorithm>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    std::copy_backward(std::begin(source), std::end(source), std::end(destination));

    std::cout << "Copied array: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
