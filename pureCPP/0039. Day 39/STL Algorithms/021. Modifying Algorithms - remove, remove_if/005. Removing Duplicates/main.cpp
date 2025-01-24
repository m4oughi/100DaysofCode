#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5};

    auto new_end = std::unique(vec.begin(), vec.end());
    vec.erase(new_end, vec.end());

    std::cout << "Vector after removing duplicates: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
