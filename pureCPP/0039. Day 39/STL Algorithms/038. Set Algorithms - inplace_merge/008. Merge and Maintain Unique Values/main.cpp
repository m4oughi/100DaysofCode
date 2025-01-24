#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data = {1, 2, 3, 3, 4, 5};

    // Merge two sorted ranges [1, 2, 3] and [3, 4, 5].
    std::inplace_merge(data.begin(), data.begin() + 3, data.end());

    // Remove duplicates after merge.
    data.erase(std::unique(data.begin(), data.end()), data.end());

    std::cout << "Merged vector without duplicates: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
