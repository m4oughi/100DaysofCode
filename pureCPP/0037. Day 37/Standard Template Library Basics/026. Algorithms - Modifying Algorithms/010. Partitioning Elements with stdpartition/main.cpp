#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    std::partition(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });

    std::cout << "After partition (evens first): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}