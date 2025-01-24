#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 5};
    std::vector<int> result;

    std::remove_copy(vec.begin(), vec.end(), std::back_inserter(result), 2);

    std::cout << "Result after remove_copy (excluding 2): ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
