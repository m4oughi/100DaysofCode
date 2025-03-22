#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data = {5, 2, 8, 1, 9, 3};

    std::sort(std::execution::par, data.begin(), data.end());

    std::cout << "Sorted data: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
