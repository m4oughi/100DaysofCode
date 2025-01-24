#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {10, 20};
    std::vector<int> result(std::min(vec1.size(), vec2.size()));

    std::transform(vec1.begin(), vec1.begin() + result.size(), vec2.begin(), result.begin(), [](int a, int b) { return a - b; });

    std::cout << "Result of subtracting elements: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
