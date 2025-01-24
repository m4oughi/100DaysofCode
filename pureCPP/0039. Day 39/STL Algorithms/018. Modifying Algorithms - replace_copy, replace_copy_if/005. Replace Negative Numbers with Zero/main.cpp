#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {-1, 2, -3, 4, -5};
    std::vector<int> result(vec.size());

    std::replace_copy_if(vec.begin(), vec.end(), result.begin(), [](int x) { return x < 0; }, 0);

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
