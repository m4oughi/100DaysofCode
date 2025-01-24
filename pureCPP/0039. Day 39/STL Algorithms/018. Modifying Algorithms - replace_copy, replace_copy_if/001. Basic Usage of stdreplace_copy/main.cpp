#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4};
    std::vector<int> result(vec.size());

    std::replace_copy(vec.begin(), vec.end(), result.begin(), 2, 99);

    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }

    std::cout << "\nResult vector: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
