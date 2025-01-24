#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {11, 22, 33, 44, 55};
    std::vector<int> destination;

    std::copy_n(source.begin(), 3, std::back_inserter(destination));

    std::cout << "Copied elements: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
