#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data = {1, 2, 3, 2, 3, 4};

    // The first half [1, 2, 3] and the second half [2, 3, 4] are sorted.
    std::inplace_merge(data.begin(), data.begin() + 3, data.end());

    std::cout << "Merged vector with duplicates: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
