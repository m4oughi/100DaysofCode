#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(5);

    std::fill(vec.begin(), vec.end(), 42);

    std::cout << "After fill: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
