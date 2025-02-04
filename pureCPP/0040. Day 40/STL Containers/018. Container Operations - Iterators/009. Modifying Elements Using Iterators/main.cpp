#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {2, 4, 6, 8};

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;  // Double each element
    }

    std::cout << "Modified Vector: ";
    for (const auto& num : vec) {
        std::cout << num << " ";
    }

    return 0;
}
