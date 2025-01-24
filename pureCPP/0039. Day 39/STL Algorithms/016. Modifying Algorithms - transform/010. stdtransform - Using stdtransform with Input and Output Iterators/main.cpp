#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result;

    std::transform(vec.begin(), vec.end(), std::back_inserter(result), [](int x) { return x * x * x; });

    std::cout << "Cubes of the vector: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
