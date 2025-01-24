#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 2, 4, 6, 8};

    auto it = std::partition_point(vec.begin(), vec.end(), [](int x) { return x % 2 != 0; });

    if (it != vec.end()) {
        std::cout << "Partition point (first even number): " << *it << std::endl;
    } else {
        std::cout << "No partition point found." << std::endl;
    }

    return 0;
}
