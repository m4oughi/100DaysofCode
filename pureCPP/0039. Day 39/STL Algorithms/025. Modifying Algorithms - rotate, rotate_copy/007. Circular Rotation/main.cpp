#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < vec.size(); ++i) {
        std::rotate(vec.begin(), vec.begin() + 1, vec.end());
        std::cout << "After rotation " << i + 1 << ": ";
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
