#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> rotated_vec(vec.size());

    std::rotate_copy(vec.begin(), vec.begin() + 2, vec.end(), rotated_vec.begin());

    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }

    std::cout << "\nRotated vector: ";
    for (int num : rotated_vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
