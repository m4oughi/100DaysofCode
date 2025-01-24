#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4};
    std::vector<int> replaced(vec.size());
    std::vector<int> squared;

    std::replace_copy(vec.begin(), vec.end(), replaced.begin(), 2, 99);
    std::transform(replaced.begin(), replaced.end(), std::back_inserter(squared), [](int x) { return x * x; });

    std::cout << "Replaced vector: ";
    for (int num : replaced) {
        std::cout << num << " ";
    }

    std::cout << "\nSquared values: ";
    for (int num : squared) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
