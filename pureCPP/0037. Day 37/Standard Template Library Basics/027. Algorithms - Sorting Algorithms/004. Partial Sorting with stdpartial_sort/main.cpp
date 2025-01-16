#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 9, 1, 5, 6};

    std::partial_sort(vec.begin(), vec.begin() + 3, vec.end());

    std::cout << "Partially sorted (first 3 elements): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
