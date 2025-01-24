#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data = {10, 20, 30, 15, 25, 35};

    // Merge the first 3 elements [10, 20, 30] with the next 3 elements [15, 25, 35].
    std::inplace_merge(data.begin(), data.begin() + 3, data.begin() + 6);

    std::cout << "Partially merged vector: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
