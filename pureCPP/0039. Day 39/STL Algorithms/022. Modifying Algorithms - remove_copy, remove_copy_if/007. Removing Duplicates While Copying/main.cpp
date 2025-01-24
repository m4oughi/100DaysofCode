#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 1, 2, 3, 3, 4, 5, 5};
    std::vector<int> result;

    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(result));

    std::cout << "Result after unique_copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
