#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::rotate(vec.begin(), vec.begin() + 2, vec.end()); // Rotate around the third element

    std::cout << "After rotation: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
