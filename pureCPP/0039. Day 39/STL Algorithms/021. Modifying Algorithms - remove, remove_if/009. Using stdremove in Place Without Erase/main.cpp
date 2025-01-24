#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 5};

    auto new_end = std::remove(vec.begin(), vec.end(), 2);

    std::cout << "Vector after remove (without erase): ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << "\nEffective size after remove: "
              << std::distance(vec.begin(), new_end) << std::endl;

    return 0;
}
