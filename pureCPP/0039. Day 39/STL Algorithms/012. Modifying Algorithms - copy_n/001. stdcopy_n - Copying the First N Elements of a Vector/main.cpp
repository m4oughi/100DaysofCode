#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(3);

    std::copy_n(source.begin(), 3, destination.begin());

    std::cout << "Copied elements: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
