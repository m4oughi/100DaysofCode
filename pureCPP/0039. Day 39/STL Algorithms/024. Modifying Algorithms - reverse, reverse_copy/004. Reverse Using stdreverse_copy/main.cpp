#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> reversed_vec(vec.size());

    std::reverse_copy(vec.begin(), vec.end(), reversed_vec.begin());

    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }

    std::cout << "\nReversed vector: ";
    for (int num : reversed_vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
