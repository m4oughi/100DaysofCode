#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 1, 2, 3, 3, 4, 5};
    std::vector<int> result(vec.size());

    auto new_end = std::unique(vec.begin(), vec.end());
    std::copy(vec.begin(), new_end, result.begin());

    std::cout << "Result after std::unique and std::copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
