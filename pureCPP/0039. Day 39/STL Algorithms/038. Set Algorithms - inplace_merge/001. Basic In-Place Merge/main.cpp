#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data = {1, 3, 5, 2, 4, 6};

    // The first half [1, 3, 5] and the second half [2, 4, 6] are sorted.
    std::inplace_merge(data.begin(), data.begin() + 3, data.end());

    std::cout << "Merged vector: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
