#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    std::rotate_copy(vec.begin(), vec.begin() + 2, vec.end(), result.begin());
    std::transform(result.begin(), result.end(), result.begin(), [](int x) { return x * 2; });

    std::cout << "Rotated and transformed vector: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
