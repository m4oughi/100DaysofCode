#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    std::rotate(vec.begin() + 1, vec.begin() + 3, vec.begin() + 5); // Rotate elements {2, 3, 4}

    std::cout << "Vector after subrange rotation: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
