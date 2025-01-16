#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 9, 1, 5, 6};

    std::nth_element(vec.begin(), vec.begin() + 2, vec.end());

    std::cout << "Nth element partitioned (3rd smallest): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
