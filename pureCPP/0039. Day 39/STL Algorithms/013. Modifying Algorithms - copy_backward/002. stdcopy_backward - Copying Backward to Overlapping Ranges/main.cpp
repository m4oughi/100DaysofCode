#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Shift first three elements to the end of the vector
    std::copy_backward(vec.begin(), vec.begin() + 3, vec.end());

    std::cout << "Modified vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
