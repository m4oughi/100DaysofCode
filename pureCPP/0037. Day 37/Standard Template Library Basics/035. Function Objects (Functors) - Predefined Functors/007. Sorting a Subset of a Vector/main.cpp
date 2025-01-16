#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 50, 30, 40, 20};

    std::sort(vec.begin() + 1, vec.begin() + 4); // Sort only the middle section

    std::cout << "After partial sort: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
