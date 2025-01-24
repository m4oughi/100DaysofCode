#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data = {10, 8, 6, 9, 7, 5};

    // The first half [10, 8, 6] and the second half [9, 7, 5] are sorted in descending order.
    std::inplace_merge(data.begin(), data.begin() + 3, data.end(), std::greater<int>());

    std::cout << "Merged vector (descending order): ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
