#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 15, 20, 25, 30, 35};
    std::vector<int> result(3); // Size of the subrange

    std::replace_copy_if(vec.begin() + 1, vec.begin() + 4, result.begin(), [](int x) { return x > 15; }, 0);

    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }

    std::cout << "\nResult vector (subrange): ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
