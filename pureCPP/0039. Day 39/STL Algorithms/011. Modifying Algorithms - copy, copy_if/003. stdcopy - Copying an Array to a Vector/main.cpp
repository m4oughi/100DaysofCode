#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int source[] = {10, 20, 30, 40, 50};
    std::vector<int> destination(5);

    std::copy(std::begin(source), std::end(source), destination.begin());

    std::cout << "Destination vector: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
